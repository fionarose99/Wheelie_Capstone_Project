using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Cutscene : MonoBehaviour
{
    public GameObject playerInput;

    public GameManager GM;

    public GameObject speakBox;

    public AudioSource Music;
    public AudioSource audio;
    public string[] TheScript;
    public AudioClip[] Characters;
    public float waitTime;
    bool read;
    string text;
    int line;
    int letter;
    int lettersub;
    float wait;
    public bool play;

    // Start is called before the first frame update
    void Start()
    {
        line = 0;
        letter = 0;
        lettersub = 0;
        text = "";
    }

    // Update is called once per frame
    void Update()
    {
        if(play)
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                EndCutscene(null);
            }
            if (line >= TheScript.Length)
            {
                if(wait <= 0)
                {
                    EndCutscene(playerInput);
                }
            }
            if (read)
            {
                if (TheScript[line].StartsWith("PAUSE:"))
                {
                    float pauseTime = float.Parse(TheScript[line].Substring(6));
                    Debug.Log(pauseTime);
                    speakBox.SetActive(false);
                    line++;
                    wait = waitTime * pauseTime;
                }
                else
                {
                    speakBox.SetActive(true);

                    string temp = TheScript[line].Replace("<NAME>", GM.playerName);
                    TheScript[line] = temp;
                    Debug.Log(TheScript[line]);

                    if (letter < TheScript[line].Length - lettersub)
                    {
                        Debug.Log("" + letter + "," + TheScript[line].Length);
                        string[] txts = TheScript[line].Split(':');
                        foreach (Text txt in GetComponentsInChildren<Text>())
                        {
                            if (txt.gameObject.name.Equals("Name"))
                            {
                                if (txts[0].StartsWith("S"))
                                {
                                    txt.text = "...";
                                }
                                else
                                {
                                    txt.text = txts[0] + ":";
                                }

                                lettersub = txts[0].Length;
                                foreach (AudioClip beep in Characters)
                                {
                                    if (txts[0].StartsWith("S"))
                                    {
                                        if (beep.name.Equals(txts[0].Substring(1)))
                                        {
                                            audio.PlayOneShot(beep);
                                        }
                                    }
                                    else
                                    {
                                        if (beep.name.Equals(txts[0]))
                                        {
                                            audio.PlayOneShot(beep);
                                        }
                                    }

                                }

                            }
                            else
                            {
                                txt.text = txts[1].Substring(0, letter);
                            }
                        }
                        text = TheScript[line].Substring(letter);

                        letter++;
                        wait = waitTime;
                    }
                    else
                    {
                        line++;
                        letter = 0;
                        lettersub = 0;
                        wait = Mathf.Infinity;
                    }

                }
                read = false;

            }
            else
            {
                wait -= 0.1f;
                if (wait <= 0)
                {
                    read = true;
                }
            }
        }    
    }

    public void Play()
    {
        GM.TogglePause(true);
        gameObject.SetActive(true);
        play = true;
    }


    public void Continue()
    {
        if(letter != 0)
        {
            line++;
        }
        letter = 0;
        lettersub = 0;
        wait = 0;
    }

    void EndCutscene(GameObject Input)
    {
        if(Input != null)
        {
            Input.SetActive(true);
        }
        this.gameObject.SetActive(false);
    }
}
