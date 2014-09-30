task main()
{
   motor[motorA] = 100;   //motor A is run at a 100 power level
   motor[motorB] = 100;   //motor B is run at a 100 power level
   wait1Msec(2000);       //the program waits 2000 milliseconds before running further code

   motor[motorA] = -65;   //motor A is run at a -65 power level
   motor[motorB] = -65;   //motor B is run at a -65 power level
   wait1Msec(4000);       //the program waits 4000 milliseconds before running further code

   motor[motorA] = 75;    //motor A is run at a 75 power level
   motor[motorB] = -75;   //motor B is run at a -75 power level
   wait1Msec(2500);       //the program waits 2500 milliseconds before running further code
}