/*******************************************
	****   @File   : MAIN_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Check  that number positive or negative or = zero  ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problemb
    setbuf(stdout ,NULL) ;
	/* Local variable */
	float _number_i ;
	/*_____________*/

	//Request from user to enter integer number
	printf("please enter a number ");

	//Take number from user
	scanf("%f", &_number_i) ;


    //check way
	if(_number_i > 0.0)
	{
		printf("%.2f is positive number " ,_number_i );
	}
	else if  (_number_i  <  0.0)
	{
		printf("%.2f is negative number " ,_number_i );
	}
	else
	{
		printf("you entered zero" );
	}

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/



