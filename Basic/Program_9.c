/* Two numbers are input through the keyboard into two locations C and D. Write a program to
   interchange the contents of C and D.*/
   
#include <stdio.h>
int main()
{
	int c,d;
	printf("Enter the two number : ");
	scanf("%d%d",&c,&d);
	
	printf("Before Interchange C is %d and D is %d\n",c,d);
	
	c = c + d; //10 + 20
	d = c - d; //30 - 20
	c = c - d; //30 - 10
	
	printf("After Interchange C is %d and D is %d",c,d);
	return 0;
}
