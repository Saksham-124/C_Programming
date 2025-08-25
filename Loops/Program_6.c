/* Write a Program to print all Even No B/W 1 to 100 */

#include<stdio.h>
int main()
{
	int i;
	
	printf("All Even Number 1 to 100\n\n");
	for(i=1;i<=100;i++)
	{
		if(i%2==0){
			printf("%d, ",i);
		}
	}
	
	return 0;
}
