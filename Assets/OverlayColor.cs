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
        public SpriteRenderer sprite;

        private void Awake()
        {
            
        }

        // Start is called before the first frame update
        void Start()
        {
            color = GetComponent<ColorPicker>();
            changeColor(sprite);
        }

        public void changeColor(SpriteRenderer spr)
        {
            spr.color = color.CurrentColor;
        }
    }
}
