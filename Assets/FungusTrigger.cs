using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fungus;

public class FungusTrigger : MonoBehaviour
{
    public Flowchart flow;
    public void FunTrigger(string msg)
    {
        Fungus.Flowchart.BroadcastFungusMessage(msg);
        Debug.Log("Message was broadcast");
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Checkpoint"))
        {
            // If player collides with checkpoint
            Debug.Log("FunTrigger Registered Hit");
            FunTrigger("Checkpoint");
        }
    }
}