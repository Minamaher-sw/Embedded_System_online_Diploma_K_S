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
	float  _operand_1_f ;
    float  _operand_2_f  ;
	char   _sign_operation_c ;
	double _result_lf ;

	/*_____________*/
    while(1)
    {
	//Request from user to determine sign operation
	printf("Enter operator + or - or * or / ");;

	//Take number from user
	scanf(" %c", &_sign_operation_c) ;

	//Request from user to enter two operand
	printf("Enter two operand ") ;

	//Take operand from user
	scanf("%f%f", &_operand_1_f ,&_operand_2_f) ;
	//Cases of operation
	switch(_sign_operation_c)
	{
	case '+' :
		_result_lf = ( _operand_1_f + _operand_2_f );
		break ;
	case '-' :
		_result_lf = ( _operand_1_f - _operand_2_f );
		break ;
	case '*' :
		_result_lf = ( _operand_1_f * _operand_2_f );
		break ;
	case '/' :
		_result_lf = ( _operand_1_f / _operand_2_f );
		break ;
	default :
		printf("wrong choose") ;
		break ;
	}

	//show result to user
	printf("Result = %.2lf" ,_result_lf) ;

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




