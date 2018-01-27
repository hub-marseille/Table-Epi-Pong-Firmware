//////////////////////////////////////////////
///*************TABLE-EPI-PONG*************///
///*************FIRMWARE  V0.1*************///
///************GUIGUR.COM  2018************///
//////////////////////////////////////////////

typedef enum
{
    Mot1Enable = 2, Mot1Step = 3, Mot1Dir = 4,
    Mot2Enable = 5, Mot2Step = 24, Mot2Dir = 25,
    Mot3Enable = 8, Mot3Step = 26, Mot3Dir = 27,
    Mot4Enable = 28, Mot4Step = 29, Mot4Dir = 30,
    EndStp1 = 31, EndStp2 = 32, EndStp3 = 39, EndStp4 = 38, EndStp5 = 39,
    Enc1Sig1 = 20, Enc1Sig2 = 21,
    Enc2Sig1 = 1, Enc2Sig2 = 0,
    Led5VData = 36, Led12VData = 35,
    Buton1 = 14, Buton2 = 15, Buton3 = 16,
    Buton4 = 17, Buton5 = 18, Buton6 = 19,
    EspTX = 34, EspRX = 33
} pinout;
