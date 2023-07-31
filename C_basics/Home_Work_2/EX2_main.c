/*******************************************
	****   @File   : MAIN_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Check  character is vowel or not   ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problemb
	setbuf(stdout ,NULL) ;
	/* Local variable */
	char _Character_c ;
	/*_____________*/

	//Request from user to enter alphabet character
	printf("please enter an alphabet ");

	//Take number from user
	scanf("%c", &_Character_c) ;

	//switch on vowel alphabet
	switch (_Character_c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'u':
		case 'o':
		case 'A':
		case 'E':
		case 'I':
		case 'U':
		case 'O':
			printf("%c is a vowel .  " ,_Character_c);
		break ;
		default :
			printf("%c is a constant .  " ,_Character_c);
		break ;

	}
	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/



