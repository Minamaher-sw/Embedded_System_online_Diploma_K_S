/*******************************************
	****   @File   : MAIN_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Check  largest number of three numbers  ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problemb
	setbuf(stdout ,NULL) ;
	/* Local variable */
	int _number1_i ;
	int _number2_i ;
	int _number3_i ;
	/*_____________*/

	//Request from user to enter numbers
	printf("please enter three numbers ");

	//Take number from user
	scanf("%d%d%d", &_number1_i ,&_number2_i ,&_number3_i) ;

	//comparison of three numbers
	if(( _number1_i > _number2_i) && (_number1_i >_number3_i) )
	{
		printf("%d is largest number " ,_number1_i );
	}
	else if  (( _number2_i > _number1_i) && (_number2_i >_number3_i))
	{
		printf("%d is largest number " ,_number2_i );
	}
	else
	{
		printf("%d is largest number " ,_number3_i );
	}

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/




