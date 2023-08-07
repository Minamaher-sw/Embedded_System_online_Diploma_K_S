/*******************************************
	****   @File   : LAB3_EX.C      ***
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
	long int Number_Students ;
	long int Counter_l ;
	float student_degree ;
	double sum =0 ;;
	float Average_l ;
	//ask user to enter number that want to print hello world
	printf("Enter the number of students ") ;
	scanf("%ld" ,&Number_Students) ;
	for(Counter_l = 1 ;Counter_l <= Number_Students ;Counter_l++)
	{
		printf("Enter Student (%ld) degree\n" ,Counter_l) ;
		scanf("%f",&student_degree) ;
		sum +=student_degree ;
	}
	Average_l = (sum /Number_Students) ;
	printf("Average students degree is :%f" ,Average_l ) ;
	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              7/8/2023            No
  ****************************************************/



