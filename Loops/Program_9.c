/*Write a Program to calculate Sum of digits B/W 1 to 10. 
  For Ex {1+2+3+4+5+6+7+8+9+10=55}
*/

#include<stdio.h>
int main()
{
	int i,sum=0;
	
	for(i=1;i<=10;i++){
		sum = sum + i;
	}
	printf("Sum of digits is : %d",sum);
	
	return 0;
}

