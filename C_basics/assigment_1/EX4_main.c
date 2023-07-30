/*******************************************
	****   @File   : EX4_MAIN.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   :   C Program to Multiply two Floating Point Numbers  ***
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
	float First_Float_Number_F =0 ;
	float Second_Float_Number_F =0 ;
	double _product_Result_ =0 ;
	/*___________________*/

	// Request from user enter First_Float_Number
	printf("please Enter First_Float_Number ") ;

	//to take from user Number
	scanf("%f" ,&First_Float_Number_F) ;

	// Request from user enter Second_Float_Number
	printf("please Enter Second_Float_Number ") ;

	//to take from user Number
	scanf("%f" ,&Second_Float_Number_F) ;

    //operation to product two numbers and store it at _product_Result_
	_product_Result_ = (First_Float_Number_F * Second_Float_Number_F ) ;

    //show for user product Result
	//lf is double specifier
	printf("The Product of two Number  =  %lf" ,_product_Result_) ;

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/

