using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    public KeyCode left { get; set; }
    [SerializeField]
    public KeyCode right { get; set; }
    [SerializeField]
    public KeyCode tilt { get; set; }

    public string test;

    public MovementController player;

    private Scene MyScene;

    public GameObject Menu;
    public GameObject Focus;

    private void Awake()
    {
        if (left == KeyCode.None)
        {
            left = KeyCode.A;
        }
        if (right == KeyCode.None)
        {
            right = KeyCode.D;
        }
        if (tilt == KeyCode.None)
        {
            tilt = KeyCode.Space;
        }

        DontDestroyOnLoad(this.gameObject);

    }

    // Start is called before the first frame update
    void Start()
    {
        player.left = left;
        player.right = right;
        player.tilt = tilt;
        //Menu = GameObject.FindGameObjectWithTag("Menu");
        //Menu.SetActive(false);
        //left = KeyCode.A;
        //right = KeyCode.D;
        //tilt = KeyCode.Space;
    }

    // Update is called once per frame
    void Update()
    {
        if (Menu == null)
        {
            foreach (GameObject gm in GameObject.FindGameObjectsWithTag("GM"))
            {
                if (gm != this.gameObject)
                {
                    GameManager GameMan = gm.GetComponent<GameManager>();
                    GameMan.left = left;
                    GameMan.right = right;
                    GameMan.tilt = tilt;
                    GameMan.test = test;
                }
            }
            Destroy(gameObject);
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (Focus != null)
            {
                ToggleMenu(Focus);
            }
            ToggleMenu(Menu);
        }

        if (Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }

    public void ToggleMenu(GameObject menu)
    {
        menu.SetActive(!menu.activeSelf);
        if (menu.activeSelf)
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
        if (Focus != null)
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
                if (kcode != KeyCode.Escape)
                {
                    temp = kcode;
                }
            }
        }

        if (key.Equals("Left"))
        {
            left = temp;
            player.left = left;
            
        }
        if (key.Equals("Right"))
        {
            right = temp;
            player.right = right;
            
        }
        if (key.Equals("Tilt"))
        {
            tilt = temp;
            player.tilt = tilt;
        }

        //txt.text = temp.ToString();
        plc.text = temp.ToString();
        Debug.Log(temp.ToString());
    }
}
