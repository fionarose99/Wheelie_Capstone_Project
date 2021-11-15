using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementController : MonoBehaviour
{
    Camera maincam;

    // Physics Variables
    public float speed = 1;
    public float maxForce = 10000;
    public WheelJoint2D Wheel;
    private JointMotor2D motor;
    private Rigidbody2D WheelieRB;
    bool motorOn;
    float move;

    // Animation Variables
    private Animator ani;
    bool isLeft = true;

    // Horizontal Axis contains input info: left (a/arrow), right (d/arrow)

    // Start is called before the first frame update
    void Start()
    {
        ani = GetComponent<Animator>();             // Addresses Animator attached to Wheelie Prefab
        WheelieRB = GetComponent<Rigidbody2D>();    // Addresses Rigibody attached to Wheelie Prefab
        maincam = Camera.main;                      // Scene Main Camera
        motor.maxMotorTorque = maxForce;            // Set's max force the player can add to the Wheelchair
    }

    // FixedUpdate called first -- Once per frame
    void FixedUpdate()
    {
        float dir = Input.GetAxis("Horizontal");    // Get Horizonal directional input (A or D/Left or Right)
        if (dir != 0)                               // What happens when the player is moving
        {
            move += dir * speed * Time.deltaTime;   // Add force to movement
            motorOn = true;                         // Turn on Wheel Motor
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
            motorOn = false;
            move *= 0.9f;

            // This is a very simple momentum. It does not track the momentum of the wheel so whenever the player starts moving again, they may accidentally trip.
        }

        if (isLeft && move > 0 && dir > 0)              // Flip code. If the player switches which way they are moving, they spin.
        {
            isLeft = false;
            ani.SetTrigger("Flip");
        } else if (!isLeft && move < 0 && dir < 0)
        {
            isLeft = true;
            ani.SetTrigger("Flip");
        }

        // Adds the motor information (it's speed and whether or not it is on).

        motor.motorSpeed = move;
        Wheel.motor = motor;
        Wheel.useMotor = motorOn;
        ani.SetBool("Moving", motorOn);
        
        // Debug for testing
        Debug.Log(dir + "," + move);
    }

    // Update called second -- once per frame
    private void Update()
    {
        maincam.transform.position = new Vector3(transform.position.x, transform.position.y, -10);
        // Default transform.position regards whatever object it's attached to -- the GameObject's transform (here, the Wheelie prefab)
    }
}
