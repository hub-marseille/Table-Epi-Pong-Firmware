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
    EndStop1 = 31, EndStop2 = 32, EndStop3 = 39, EndStop4 = 38, EndStop5 = 39,
    Led5VData = 36, Led12VData = 35,
    EspTX = 34, EspRX = 33,
    ACTIONMASTER = 14, ONEPLAYERMASTER = 15, TWOPLAYERSMASTER = 16,
    ENCSIG1MASTER = 20, ENCSIG2MASTER = 21,
    ACTIONSLAVE = 17, ONEPLAYERSLAVE = 18, TWOPLAYERSSLAVE = 19,
    ENCSIG1SLAVE = 1, ENCSIG2SLAVE = 0
} pinout;
