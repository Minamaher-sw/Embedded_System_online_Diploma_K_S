/*******************************************
	****   @File   : MAIN_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Check  if input character is alphabet or not   ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problemb
    setbuf(stdout ,NULL) ;
	/* Local variable */
	char _Character_c ;
	int  CasingVariable_i  ;
	char _check_c ;
	/*_____________*/
	while(1)
	{
		//Request from user to enter integer number
		printf("please enter a _Character_ ");

		//Take number from user
		scanf(" %c", &_Character_c) ;

		//casting (explicit  )
		CasingVariable_i = (int)_Character_c ;

		//check way
		_check_c =( (CasingVariable_i > 64 ) && (CasingVariable_i < 91 )) || ((CasingVariable_i > 96 ) && (CasingVariable_i < 123 ) ) ;
		if(1 == _check_c)
		{
			printf("%c is an alphabet  " ,_Character_c );
		}
		else if  (0 == _check_c)
		{
			printf("%c is an not alphabet  " ,_Character_c );
		}
		else
		{
			/* error message */
		}
		//new line
		printf("\n") ;
	}

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/



