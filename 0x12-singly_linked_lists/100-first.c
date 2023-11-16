#include<stdio.h>

/**
 * myFunStart - Apply the constructor attribute to myFunStart() so that it
 *   is executed before main()
 */
void myFunStart(void) __attribute__ ((constructor));

/**
 * myFunStart - implementing myFunStart
 */
void myFunStart(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
