/*******************************************
	****   @File   : LAB1_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 7/8/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Calculate minimum of two numbers  ***
 ********************************************/
/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	setbuf(stdout ,NULL) ;
	/* local variable */
	long int _First_Number_l ;
	long int _Second_Number_l ;
	long int Minimum_Number_l ;
	/*________________*/
	//ask user to enter two numbers
	printf("Enter Two Numbers") ;
	scanf("%ld%ld",&_First_Number_l ,&_Second_Number_l);

	/* in line condition */
	Minimum_Number_l = _First_Number_l < _Second_Number_l ? _First_Number_l :_Second_Number_l ;

	printf("Minimum  Number is %ld " ,Minimum_Number_l);
	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/

