/*
 *  Printf_Tricks.c
 *
 *  Created on: Aug 1, 2023
 *  Author: Mina Maher
 */

#include <stdio.h>

int main()
{
    /* First Trick
     * '%*c' Trick make space before character = number is(10)
     *  output=
     *  Result is'         x'
        Result is : 'x         '
     */
	printf("Result is'%*c'\n",10,'x');
	printf("Result is : '%*c'\n",-10,'x');
    /*second trick
     * printf return number of character inside it
     * if string = "mena :\n"
     * r = 7
     */

	int store_value = printf("mena :\n");
	printf("%d \n" ,store_value) ;

	/*third tricks */
	/*
	 * %10 display string in 10 digit with space for non charater_position
	 * \t is space with tap
	 * =    [     Hello]
	 */
	const char* string_array ="Helloo" ;
	printf("\t[%10s]\n" ,string_array);
	/*
	 * set space after string if length of it less than 10
	 */
	printf("\t[%-10s]\n" ,string_array);
	/*
	 * is = printf("\t[%-10s]\n" ,string_array);
	 * */
	printf("\t[%*s]\n" ,10,string_array);
	/*
	 * only print first charcter of string that are equal to = 6
	 * and make space after it equal to 10-6
	 */
	printf("\t[%-10.*s]\n" ,4,string_array);

	/*
	 *printf("\t[%-10*s]\n" ,6,string_array); will print only ( *s)
	 */

	/*
	 * every *replace it with number
	 * so = printf("\t[%-10.*s]\n" ,4,string_array);
	 */
	printf("\t[%-*.*s]\n" ,10 ,4,string_array);
	/*
	 * at end
	 *  [    Helloo]
		[Helloo    ]
		[    Helloo]
		[Hell      ]
		[Hell      ]
	 */

	/* Fourth Trick */
	/*
	 *  %%  is print as one moduls  out is %
	 *
	 *  so asci of 65 is A
	 *  so out is ( A % )
	 */
	printf("Characters :\t%c %%\n",65);

	/*
	 * out Decimal :	1 ,2 ,000003 , 0 ,  , +4 , 4294967295
	 * %.6i  mean that print 3 as six number start 000003
	 * %.0i  print space instead of number thing at output
	 * %u print Two,s complement from -1 is  1 -> 0000 0001
	 *                                      -1 -> 1111 1111
	 * 4294967295 = 11111111 11111111 11111111 11111111   4 byte
	 */
	printf("Decimal :\t%i ,%d ,%.6i , %i , %.0i , %+i , %u \n" ,1,2,3,0,0,4,-1);

	/*
	 * hex
	 * 1 ,2 ,D , 0x6
	 *%#x   out 0x6
	 * D = (13)decimal
	 */
	printf("Hex :\t%x ,%x ,%X , %#x  \n" ,1,2,13,6);

	/*
	 * octal
	 * out Octal :	1 ,2,015
	 * 0x#o  has effect that octal start with 0
	 *
	 */
	printf("Octal :\t%o ,%o,%#o   \n" ,1,2,13);

	/*
	 * floating
	 * 1.500000 ,2 ,1.50000000000000000000000000000000
	 * 0000000000000000000000000000000  is 32 number after .
	 * 1.5 _> 2 by effect .0f
	 *
	 */
	printf("Rounding  :%f ,%.0f ,%.32f \n" ,1.5 ,1.5,1.5);
	/*
	 *out 01.50 1.50  _1.50
	 *  01.50 is five (.) count it as number  and set two number after it first and after
	 *  add main number if less than 5 number pad it by 0 at start
	 *  ( _ )act as space
	 */
	printf("padding  :%05.2f ,%.2f ,%5.2f \n" ,1.5 ,1.5,1.5);
	/*
	 * out scientific  :1.500000E+000 ,1.500000e+000
	 */
	printf("scientific  :%E ,%e \n" ,1.5 ,1.5);
	/*
	 *out scientific  :1.50E+000 ,1.50e+000
	 */
	printf("scientific  :%.2E ,%.2e \n" ,1.5 ,1.5);
	/*
	 *scientific  :01.50E+000 ,01.50e+000
	 */
	printf("scientific  :%010.2E ,%010.2e \n" ,1.5 ,1.5);

	/* new trick
	 * special values
	 * Special values :	 1 is not same out at lecture so complier dependent
	 * unit1_lesson3\Printf_Tricks.c:136:9: warning: too many arguments for format [-Wformat-extra-args]
	 */
	printf("Special values :\t 1\0 =%g\n",0.0/0.0 ,1.0/0.0) ;

	/*
	 * last tricks
	 *unit1_lesson3\Printf_Tricks.c:143:42: warning: operation on 'x' may be undefined [-Wsequence-point]
	 *values :	 1C tricks 	 12 11 10 compiler dependent
	 * solution from left to right
	 * x++  10
	 * x=11
	 * ++x
	 * x=12
	 *
	 * second printf last vlaue of x 12
	 * so from left to right
	 * 12
	 * 13
	 * 13
	 */
	int x= 10 ;
	printf("C tricks \t %d %d %d \n",++x ,x ,x++);
	printf("C tricks \t %d %d %d ",x++ ,++x ,x);
	return 0 ;
}

