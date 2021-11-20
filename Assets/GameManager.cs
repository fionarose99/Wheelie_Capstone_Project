using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public KeyCode left { get; set; }
    public KeyCode right { get; set; }
    public KeyCode tilt { get; set; }


    public GameObject Menu;
    public GameObject Focus;

    // Start is called before the first frame update
    void Start()
    {
        left = KeyCode.A;
        right = KeyCode.D;
        tilt = KeyCode.Space;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            ToggleMenu(Menu);
        }
    }

    public void ToggleMenu(GameObject menu)
    {
        menu.SetActive(!menu.activeSelf);
        if(menu.activeSelf)
        {
            Focus = menu;
        }
        else
        {
            Focus = null;
        }
    }

    public void ToggleFocus()
    {
        if(Focus != null)
        {
            Focus.SetActive(false);
            Focus = null;
        }
    }

    public void LoadScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }

    public void Exit()
    {
        Application.Quit();
    }

    public void BindKey(Text plc)
    {
        string key = plc.name;
        KeyCode temp = KeyCode.None;
        if (key.Equals("Left"))
        {
            temp = left;
        }
        if (key.Equals("Right"))
        {
            temp = right;
        }
        if (key.Equals("Tilt"))
        {
            temp = tilt;
        }
        
        foreach (KeyCode kcode in System.Enum.GetValues(typeof(KeyCode)))
        {
            if (Input.GetKey(kcode))
            {
                if(kcode != KeyCode.Escape)
                {
                    temp = kcode;
                }                
            }
        }
        
        if (key.Equals("Left"))
        {
            left = temp;
            Debug.Log("Left: " + left.ToString());
        }
        if (key.Equals("Right"))
        {
            right = temp;
        }
        if (key.Equals("Tilt"))
        {
            tilt = temp;
        }

        //txt.text = temp.ToString();
        plc.text = temp.ToString();
        Debug.Log(temp.ToString());
    }
}
