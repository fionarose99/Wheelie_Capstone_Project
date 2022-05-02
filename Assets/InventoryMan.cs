using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryMan : MonoBehaviour
{
    public int sigCount;
    public GameManager GM;
    public MovementController moveCon;
    public GameObject playerObj;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    private void Update()
    {
        // Debug.Log("UPDATE");
        // OnTriggerEnter -- tag = "Signature"


    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Signature"))
        {
            // GM.TogglePause(true);
            Debug.Log("signature collected");
            sigCount++;
        }
    }
}
