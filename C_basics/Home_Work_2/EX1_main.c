/*******************************************
	****   @File   : MAIN_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Check  odd and even numbers  ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problemb
	setbuf(stdout ,NULL) ;
	/* Local variable */
	int _number_i ;
	int _result_i ;
	/*_____________*/

	//Request from user to enter integer number
	printf("please enter an integer that you want check ");

	//Take number from user
	scanf("%d", &_number_i) ;

	//Mathematical operation
	_result_i =_number_i % 2 ;

	if(0 == _result_i)
	{
		printf("%d is even number " ,_number_i );
	}
	else if  (1 == _result_i)
	{
		printf("%d is odd number " ,_number_i );
	}
	else
	{
		/* error message */
	}

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/

