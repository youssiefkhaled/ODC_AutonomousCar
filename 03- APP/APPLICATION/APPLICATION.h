#ifndef _APP_APPLICATION_H_ 
#define _APP_APPLICATION_H_


u8 is_moving = 0;
u8 distance= 10;
u8 APP_state = InitSate;

typedef enum
{
	InitSate =0,
	stopState =1,
	ScanDirState=2,
	CheckMovingState=3,
	ChooseDirState=4,
	SpinRightState=5,
	SpinLiftState=6,
	runState=7
} _enuState_t;


typedef enum 
{
    forward,
    right,
    left,
    stoped
}_enuDirction_t_;

//0
void APP_vidInitSate(void);
//1
void APP_vidStopSate(void);
//2
void APP_vidScan(void);
//3
void APP_CheckMoving(void);
//4
void APP_vidChooseDir(void);
//5
void APP_vidSpinRight(void);
//6
void APP_vidSpinLift(void);
//7
void APP_vidRun(void);


void (*APP_Arr[]) (void) = {APP_vidInitSate,APP_vidStopSate,APP_vidScan,APP_CheckMoving,APP_vidChooseDir,APP_vidSpinRight,APP_vidSpinLift,APP_vidRun}
#endif