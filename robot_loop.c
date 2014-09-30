task main()
{
   int i = 0;                  
      while(i < 20)             //loop delcared
      {
         motor[motorA] = 75;    //motor A is run at a 75 power level
	       motor[motorB] = 75;    //motor B is run at a 75 power level
	       wait1Msec(4000);      

         i++;                   //the variable "i" is increased by 1
       }
} 