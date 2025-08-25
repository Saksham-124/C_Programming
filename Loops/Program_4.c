/* WAP to print the table of a given No input through the Keyboard but with alternate No.
   For Ex:- table of 2 is {2 6 10 14 18 22}
*/

#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=20;i=i+2){
		printf("%d X %d = %d\n",num,i,num*i);
	}
	return 0;
}
