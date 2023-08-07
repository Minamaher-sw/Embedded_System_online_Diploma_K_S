/*******************************************
	****   @File   : LAB2_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 7/8/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to summation from 1 until number enter by user   ***
 ********************************************/
/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	setbuf(stdout ,NULL) ;
	/*local variables */
	long int Number_Iterations_l ;
	long int Counter_l ;
	long long int sum_ll =0;
	//ask user to enter number that want to print hello world
	printf("Enter a number ") ;
	scanf("%ld" ,&Number_Iterations_l) ;
	for(Counter_l = 1 ;Counter_l <= Number_Iterations_l ;Counter_l++)
	{
		sum_ll += Counter_l ;
	}
	printf("summation from 1 to %ld is %lld" ,Number_Iterations_l ,sum_ll) ;
	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              7/8/2023            No
  ****************************************************/






