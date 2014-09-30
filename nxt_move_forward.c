//******************************************************************************//
//                              Moving Forward                                  //
//                              RobotC on NXT                                   //
//                                                                              //
//  This program allows your robot to move forward for a designated amount of   //
//  time.                                                                       //
//                                                                              //
//******************************************************************************//
//				Focus                                                           //
//                                                                              //
//  The focus of this program is to just introduce a basic concept of movement with the robot //
//  and waiting for a specific amount of time to have the program run for a 4 second duration.
//                                                                              //
//******************************************************************************//
//				Notes                                                           //
//                                                                              //
//  1. To change the forward movement's speed replace the two "100"'s with the  //
//     desired speed number.                                                    //
//  2. To change the duration of the movement, replace the "4000" with the      //
//     desired number of milliseconds.                                          //
//                                                                              //
//******************************************************************************//
//				Motors & Sensors                                //
//                                                                              //
//  [I/O Port]          [Name]          [Type]          [Description]           //
//  Port A              none            Motor           Right Motor             //
//  Port B              none            Motor           Left Motor              //
//                                                                              //
//******************************************************************************//


task main()
{
    motor[motorA] = 100;   //motor A is run at a 100 power level
    motor[motorB] = 100;   //motor B is run at a 100 power level
    wait1Msec(4000);       //the program waits 4000 milliseconds before running further code
}