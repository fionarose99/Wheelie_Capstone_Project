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

    public bool paused;

    public MovementController player;

    private Scene MyScene;

    public GameObject Menu;
    public GameObject Focus;
    public GameObject[] KeybindButtons;

    public AudioSource Music;
    public AudioSource Sound;

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
        if(name.Equals("GameManagerGame"))
        {
            TogglePause(paused);
            player.left = left;
            player.right = right;
            player.tilt = tilt;
        }
    }

    void SetBindText()
    {
        KeybindButtons[0].GetComponentInChildren<Text>().text = left.ToString();
        KeybindButtons[1].GetComponentInChildren<Text>().text = right.ToString();
        KeybindButtons[2].GetComponentInChildren<Text>().text = tilt.ToString();
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
                    Debug.Log("Done");
                    GameManager GameMan = gm.GetComponent<GameManager>();
                    GameMan.left = left;
                    GameMan.right = right;
                    GameMan.tilt = tilt;
                    if(GameMan.player != null)
                    {
                        GameMan.player.left = left;
                        GameMan.player.right = right;
                        GameMan.player.tilt = tilt;
                    }

                }
            }
            Destroy(gameObject);
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (Focus != null)
            {
                if(Focus != Menu)
                {
                    ToggleMenu(Focus);
                }

            }
            ToggleMenu(Menu);
            TogglePause();
        }

        if (Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            TogglePause(false);
        }
    }

    public void TogglePause()
    {
        if(Time.timeScale == 0)
        {
            Time.timeScale = 1;
        } else
        {
            Time.timeScale = 0;
        }
    }

    public void TogglePause(bool pause)
    {
        if(pause)
        {
            Time.timeScale = 0;
        }
        else
        {
            Time.timeScale = 1;
        }
    }

    public void ToggleMenu(GameObject menu)
    {
        menu.SetActive(!menu.activeSelf);
        if(menu.name.Equals("Keybinds"))
        {
            SetBindText();
        }
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
        TogglePause(true);
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
            if (player != null)
            {
                player.left = left;
            }

        }
        if (key.Equals("Right"))
        {
            right = temp;
            if(player != null)
            {
                player.right = right;
            }
            
            
        }
        if (key.Equals("Tilt"))
        {
            tilt = temp;
            if (player != null)
            {
                player.tilt = tilt;
            }
        }

        //txt.text = temp.ToString();
        plc.text = temp.ToString();
        Debug.Log(temp.ToString());
    }

    public void playSound(AudioClip clip)
    {
        Sound.PlayOneShot(clip);
    }
}
