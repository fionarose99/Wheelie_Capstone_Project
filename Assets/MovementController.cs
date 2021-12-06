using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementController : MonoBehaviour
{
    Camera maincam;
    public GameManager GM;

    public KeyCode left { get; set; }
    public KeyCode right { get; set; }
    public KeyCode tilt { get; set; }

    // Physics Variables
    public float speed = 1;
    public float leanSpeed = 1;
    public float maxForce = 10000;
    public WheelJoint2D Wheel;
    private JointMotor2D Wheelmotor;
    bool WheelmotorOn;
    public HingeJoint2D joint;
    private JointMotor2D JointMot;
    bool JointMotorOn;
    float move;
    float lean;
    float direction = 1;

    // Animation Variables
    private Animator ani;
    bool isLeft = false;

    // Horizontal Axis contains input info: left (a/arrow), right (d/arrow)

    // Start is called before the first frame update
    void Start()
    {
        ani = GetComponent<Animator>();             // Addresses Animator attached to Wheelie Prefab
        maincam = Camera.main;                      // Scene Main Camera
        Wheelmotor.maxMotorTorque = maxForce;       // Set's max force the player can add to the Wheelchair
        JointMot.maxMotorTorque = maxForce;       // Set's max force the player can add to the Wheelchair
    }

    // FixedUpdate called first -- Once per frame
    void FixedUpdate()
    {
        float jump = VerticalAxis();
        if (jump != 0)
        {
            lean += jump * leanSpeed * Time.deltaTime * direction;
            move *= 1.05f;
            JointMotorOn = true;
        } else
        {
            JointMotorOn = false;
            lean *= 0.90f;
        }

        float dir = HorizontalAxis();    // Get Horizonal directional input (A or D/Left or Right)
        if (dir != 0)                               // What happens when the player is moving
        {
            move += dir * speed * Time.deltaTime;   // Add force to movement
            WheelmotorOn = true;                         // Turn on Wheel Motor
            if ((dir > move && dir > 0) || (dir < move && dir < 0))     // Braking Code
            {
                ani.SetBool("Braking", true); // If the player is adding force to the opposite direction they are facing, play Braking animation.
            }
            else
            {
                ani.SetBool("Braking", false); // Otherwise don't.
            }
        }
        else                                         // When the player stops pressing inputs, turn off motor and decrease motor speed. This makes the wheel go slack and allows for rolling down hills.
        {
            WheelmotorOn = false;
            move *= 0.9f;

            // This is a very simple momentum. It does not track the momentum of the wheel so whenever the player starts moving again, they may accidentally trip.
        }

        if (isLeft && move > 0 && dir > 0)              // Flip code. If the player switches which way they are moving, they spin.
        {
            isLeft = false;
            ani.SetTrigger("Flip");
            direction = -1;
        } else if (!isLeft && move < 0 && dir < 0)
        {
            isLeft = true;
            ani.SetTrigger("Flip");
            direction = 1;
        }

        // Adds the motor information (it's speed and whether or not it is on).

        Wheelmotor.motorSpeed = move;
        JointMot.motorSpeed = lean;
        Wheel.motor = Wheelmotor;
        joint.motor = JointMot;
        Wheel.useMotor = WheelmotorOn;
        joint.useMotor = JointMotorOn;
        ani.SetBool("Moving", WheelmotorOn);
        
        // Debug for testing
        Debug.Log(dir + "," + move);
    }

    private float HorizontalAxis()
    {
        if(Input.GetKey(left))
        {
            return -1;
        } else if (Input.GetKey(right))
        {
            return 1;
        }
        return 0;
    }

    private float VerticalAxis()
    {
        if (Input.GetKey(tilt))
        {
            return 1;
        }
        return 0;
    }


    // Update called second -- once per frame
    private void Update()
    {
        maincam.transform.position = new Vector3(transform.position.x, transform.position.y, -10);
        // Default transform.position regards whatever object it's attached to -- the GameObject's transform (here, the Wheelie prefab)
    }


}
