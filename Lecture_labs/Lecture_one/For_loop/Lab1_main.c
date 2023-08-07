/*******************************************
	****   @File   : LAB1_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 7/8/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to print Hello world to number enter by user   ***
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
	//ask user to enter number that want to print hello world
	printf("Enter number of iterations ") ;
	scanf("%ld" ,&Number_Iterations_l) ;
	for(Counter_l = 0 ;Counter_l <Number_Iterations_l ;Counter_l++)
	{
		printf("%ld_Hello World\n" ,Counter_l);
	}
	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              7/8/2023            No
  ****************************************************/





