/*******************************************
	****   @File   : EX5_MAIN.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 30/7/2023      ***
	****   Version : v1             ***
	****   Brief   :  C Program to Find ASCII Value of a Character ***
 ********************************************/

/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	//for overlap on Buffer problem
	setbuf(stdout ,NULL) ;

	/* Local Variable */
	char _BufferChar_c;

	/*___________________*/

	// Request from user enter character
	printf("please Enter any character ") ;

	//to take from user Number
	scanf("%c" ,&_BufferChar_c) ;

    //Show ASCII of entered character For user
	printf("The ASCII OF ( %c ) is %d " ,_BufferChar_c ,_BufferChar_c) ;

	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/


