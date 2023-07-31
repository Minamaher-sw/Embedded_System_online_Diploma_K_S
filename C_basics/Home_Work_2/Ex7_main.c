/*******************************************
	****   @File   : MAIN_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Calculate Factorial of integer numbers ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problem
    setbuf(stdout ,NULL) ;
	/* Local variable */
    //unsigned store only positive number
	int _number_s ;
    int _counter_s  ;
	unsigned long long int Factorial_llu =1;
	/*_____________*/
    while(1)
    {
	//Request from user to enter integer number
	printf("please enter a number ");;

	//Take number from user
	scanf(" %u", &_number_s) ;

	//Mechanism of Factorial
	if(_number_s > 1)
	{
		for(_counter_s =1 ;_counter_s <=_number_s ;_counter_s++)
		{
			Factorial_llu *= _counter_s ;
		}
		printf("Factorial of %d = %llu" , _number_s ,Factorial_llu) ;
	}
	else if((1 == _number_s)|| (0 == _number_s) )
	{
		printf("Factorial = %d " ,_number_s) ;
	}
	else
	{
		printf("Error !!! Factorial of negative is not exist ") ;
	}

	//show for user result
	printf("\n") ;
    }
	return 0 ;

}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/


