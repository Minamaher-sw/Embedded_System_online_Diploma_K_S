/*******************************************
	****   @File   : LAB2_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 7/8/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to print number at this shape
	****   out
            Enter a number 10
			0 1 2 3 4 5 6 7 8 9
			1 2 3 4 5 6 7 8 9
			2 3 4 5 6 7 8 9
			3 4 5 6 7 8 9
			4 5 6 7 8 9
			5 6 7 8 9
			6 7 8 9
			7 8 9
			8 9
			9    ***
 ********************************************/
/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	setbuf(stdout ,NULL) ;
	/*local variables */
	long int Number_Iterations_l ;
	long int Counter1_l ;
	long int Counter2_l ;
	//ask user to enter number that want to print hello world
	printf("Enter a number ") ;
	scanf("%ld" ,&Number_Iterations_l) ;
	for(Counter1_l =0 ;Counter1_l <Number_Iterations_l ;Counter1_l++)
	{
		for(Counter2_l =Counter1_l ;Counter2_l <Number_Iterations_l ;Counter2_l++)
		{
			printf("%ld " ,Counter2_l) ;
		}
		printf("\n");
	}

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              7/8/2023            No
  ****************/


