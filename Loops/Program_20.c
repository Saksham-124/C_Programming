/*1.i) **********  ii) * 	  iii)    * 	 iv)    1 	   v)     1
 	   ********** 	   ** 		     ***           222           212
 	   ********** 	   *** 	        *****         33333         32123
 	   ********** 	   **** 	   *******       4444444       4321234
 	   ********** 	   ***** 	  *********     555555555     543212345 */

#include<stdio.h>

void i()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=10;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void ii()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	i();
	printf("\n");
	ii();
	return 0;
}
