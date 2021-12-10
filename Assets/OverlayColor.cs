using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace HSVPicker
{


    public class OverlayColor : MonoBehaviour
    {

        private ColorPicker color;
        private SVBoxSlider slider;
        public SpriteRenderer sprite;

        // Start is called before the first frame update
        void Start()
        {
            color = GetComponent<ColorPicker>();
            slider = GetComponentInChildren<SVBoxSlider>();
            color.AssignColor(sprite.color);
        }

        public void changeColor(SpriteRenderer spr)
        {
            spr.color = color.CurrentColor;
        }
    }
}
