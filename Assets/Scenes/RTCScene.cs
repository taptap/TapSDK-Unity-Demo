using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TapTap.RTC;

public class RTCScene : MonoBehaviour
{
    public Button InitButton, BackButton, JoinRoomButton, ExitRoomButton, UpdatePositonButton, UpdateDistanceButton;

    public Toggle RangeToggle,
        MicToggle,
        SpeakerToggle,
        LoopBackToggle,
        WorldToggle,
        TeamToggle,
        ThreeDToggle,
        HighToggle,
        MidToggle,
        LowToggle,
        BanUserToggle;

    public Slider micSlider, speakerSlider;

    public InputField userIdInputField, roomIdInputField, positionInputField, distanceInputField, banUserIdInputField;


    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}