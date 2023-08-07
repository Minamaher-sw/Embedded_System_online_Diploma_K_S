/*******************************************
	****   @File   : LAB1_EX.C      ***
	****   Author  : Mina Maher     ***
	****   Data    : 7/8/2023      ***
	****   Version : v1             ***
	****   Brief   : C Program to Calculate Circle Area or Circumference  ***
 ********************************************/
/** Linking Section   */
#include <stdio.h>

/* Main section start */
int main()
{
	setbuf(stdout ,NULL) ;
	/* ask user what do  you want that calculate Circle Area or Circumference
	 * A ->Circle Area
	 * a ->Circle Circumference
	 */
	/* local area */
	char _area_Buffer_c ;

	float _circle_diameter_u ;

	double Circle_Area_l ;
	double Circle_Circumference_l ;

	/*____________*/
	printf("Enter A to calculate Circle Area and a to calculate Circle Circumference ");
	scanf("%c" ,&_area_Buffer_c) ;

	if('A' == _area_Buffer_c)
	{
		printf("Enter circle diameter ") ;
		//%hu for unsigned short integer
		scanf("%f" ,&_circle_diameter_u) ;
		Circle_Area_l = 3.14*_circle_diameter_u*_circle_diameter_u ;
		//%lu for unsigned long integer
		printf("Area of circle is %lf",Circle_Area_l);
	}
	else if('a' == _area_Buffer_c )
	{
		printf("Enter circle diameter ") ;
		//%hu for unsigned short integer
		scanf("%f" ,&_circle_diameter_u) ;
		Circle_Circumference_l = 2*3.14*_circle_diameter_u;
		//%lu for unsigned long integer
		printf("Area of circle is %lf",Circle_Circumference_l);
	}
	else
	{
		/*Error Message */
	}
	return 0 ;
}
/* Main section end */

/****************************************************
   Name                    Date               Update
 Mina Maher              30/7/2023            No
  ****************************************************/




