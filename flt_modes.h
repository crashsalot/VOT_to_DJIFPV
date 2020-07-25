const char VectorFlightModeStr[16][15] PROGMEM =  {
                                                   "2D","WAYPOINT",
                                                   "2D_ALT_HOLD",
                                                   "2D_HEADING_HOLD",
                                                   "LOITER",
                                                   "3D",
                                                   "3D_HEADING_HOLD",
                                                   "RTH",
                                                   "LAND",
                                                   "CARTESIAN",
                                                   "CART_LOITER",
                                                   "POLAR",
                                                   "POLAR_LOITER",
                                                   "CENTER_STICK",
                                                   "MANUAL",
                                                   "MAX"};

const typedef enum {
        ARM_ACRO_BF = (1 << 0),
        STAB_BF     = (1 << 1),
        HOR_BF      = (1 << 2),
        HEAD_BF     = (1 << 3),
        FS_BF       = (1 << 4),
        RESC_BF     = (1 << 5)
} betaflightDJIModesMask_e;

//DJI supported flightModeFlags
// 0b00000001 acro/arm
// 0b00000010 stab
// 0b00000100 hor
// 0b00001000 head
// 0b00010000 !fs!
// 0b00100000 resc
// 0b01000000 acro
// 0b10000000 acro
