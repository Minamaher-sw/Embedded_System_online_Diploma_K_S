/*******************************************
	****   @File   : MAIN_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   :  C Program to Add Two Integers  ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problem
	setbuf(stdout ,NULL) ;

	/* Local Variable */
	//long is 4 byte has range (-2,147,483,648 to +2,147,483,647	)
	//long long for integer is 8 byte has range from -9,223,372,036,854,775,808 through 9,223,372,036,854,775,807
	long int First_Integer_Number_li =0 ;
	long int Second_Integer_Number_li =0 ;
	long long int Sum_lli =0 ;
	/*___________________*/

	// Request from user enter first integer number
	printf("please Enter First_Integer_Number ") ;

	//to take from user Number
	scanf("%ld" ,&First_Integer_Number_li) ;

	// Request from user enter second integer number
	printf("\nplease Enter Second_Integer_Number ") ;

	//to take from user Number
	scanf("%ld" ,&Second_Integer_Number_li) ;

    //operation to sum two numbers
	Sum_lli = (First_Integer_Number_li + Second_Integer_Number_li ) ;

    //show for user sum Result
	printf("The Result is sum =  %lld" ,Sum_lli) ;

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/

