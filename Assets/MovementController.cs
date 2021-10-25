using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementController : MonoBehaviour
{
    public Camera maincam;
    public float speed = 1;

    private Rigidbody2D WheelieRB;
    // Addresses rb attached to Wheelie Prefab

    // Start is called before the first frame update
    void Start()
    {
        WheelieRB = GetComponent<Rigidbody2D>();
        maincam = Camera.main;
    }

    // FixedUpdate called first -- Once per frame
    void FixedUpdate()
    {
        float move = Input.GetAxis("Horizontal") * speed;
        // Horizontal Axis contains input info: left (a/arrow), right (d/arrow)

        //transform.Translate((move,0,0))

        WheelieRB.AddForce(new Vector2(move, 0f));
        Debug.Log(move);
    }

    // Update called second -- once per frame
    private void Update()
    {
        maincam.transform.position = new Vector3(transform.position.x, transform.position.y, -10);
        // Default transform.position regards whatever object it's attached to -- the GameObject's transform (here, the Wheelie prefab)
    }
}
