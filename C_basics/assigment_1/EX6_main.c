/*******************************************
	****   @File   : MAIN_EX3.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   :  Source Code to Swap Two Numbers ***
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
	long int _First_Number_li =0 ;
	long int _Second_Number_li =0 ;
	long int _Temp_li = 0 ;
	/*___________________*/

	// Request from user enter first integer number
	printf("please Enter First_Number ") ;

	//to take from user Number
	scanf("%ld" ,&_First_Number_li) ;

	// Request from user enter second integer number
	printf("please Enter Second_Number ") ;

	//to take from user Number
	scanf("%ld" ,&_Second_Number_li) ;

    //operation to swap two numbers
	_Temp_li=  _First_Number_li ;
	_First_Number_li = _Second_Number_li ;
	_Second_Number_li=_Temp_li ;

    //show for user sum Result
	printf("The First Number  is =  %ld\n" ,_First_Number_li) ;
	printf("The Second Number  is  =  %ld\n" ,_Second_Number_li) ;

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/


