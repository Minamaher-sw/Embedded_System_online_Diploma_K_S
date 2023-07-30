/*******************************************
	****   @File   : MAIN_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Print a Integer Entered by a User  ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problem
	setbuf(stdout ,NULL) ;

	/* Local Variable */
	//long long for integer is 8 byte has range from -9,223,372,036,854,775,808 through 9,223,372,036,854,775,807
	long long int integer_number =0 ;
	/*___________________*/

	// Request from user enter integer number
	printf("please Enter integer number ") ;

	//to take from user Number
	scanf("%lld" ,&integer_number) ;

    //show for user number that is Entered
	printf("you entered : %lld" ,integer_number) ;

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/



