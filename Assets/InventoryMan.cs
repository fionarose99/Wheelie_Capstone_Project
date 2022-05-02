using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryMan : MonoBehaviour
{
    public int sigCount;
    public Text sigCountUI;
    public GameManager GM;
    public MovementController moveCon;
    public GameObject playerObj;

    // Start is called before the first frame update
    void Start()
    {
        sigCount = 0;
        sigCountUI.text = sigCount.ToString();
    }

    // Update is called once per frame
    private void Update()
    {
        // Debug.Log("UPDATE");
        // OnTriggerEnter -- tag = "Signature"
        sigCountUI.text = sigCount.ToString();
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Signature"))
        {
            // GM.TogglePause(true);
            Debug.Log("signature collected");
            sigCount++;
            Destroy(collision.gameObject);
        }
    }
}
