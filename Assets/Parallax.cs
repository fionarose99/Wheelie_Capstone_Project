using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parallax : MonoBehaviour
{
    public float length, startpos;
    public GameObject cam;
    public float paralaxEffect;
    public float temp;
    public float dist;
    public float posLength;
    public float moveSpeed;

    // Start is called before the first frame update
    void Start()
    {
        startpos = transform.position.x;
        length = 62;
    }

    // Update is called once per frame
    void Update()
    {
        temp = (cam.transform.position.x * (1 - paralaxEffect));
        dist = ((cam.transform.position.x) * paralaxEffect);

        startpos += moveSpeed;
        transform.position = new Vector3(startpos + dist, transform.position.y, transform.position.z);

        if (temp > startpos + length)
        {
            startpos += length*2;
        } else if (temp < startpos - length)
        {
            startpos -= length*2;
        }
    }
}
