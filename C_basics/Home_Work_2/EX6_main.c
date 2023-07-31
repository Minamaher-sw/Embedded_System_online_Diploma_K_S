/*******************************************
	****   @File   : MAIN_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Calculate sum of neutral number ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problemb
    setbuf(stdout ,NULL) ;
	/* Local variable */
    //unsigned store only positive number
	unsigned int _number_ui ;
	unsigned int _counter_ui  ;
	unsigned long long int sum =0;
	/*_____________*/

	//Request from user to enter integer number
	printf("please enter a number ");

	//Take number from user
	scanf("%u", &_number_ui) ;

	//Mechanism of summation
	for(_counter_ui =1 ;_counter_ui <=_number_ui ;_counter_ui++)
	{
		sum +=_counter_ui ;
	}

	//show for user result
	printf("SUM = %llu" , sum) ;
	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/



