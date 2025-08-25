/* Write a Program to print Fibonacci Series. For (0, 1, 1, 2, 3, 5, 8, 13, -------------------) */

#include<stdio.h>
int main()
{
	int i,num,t1=0,t2=1,nextTerm=0;
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("Fibonacci Series : ");
	for(i=1;i<=num;++i){
		printf("%d ",t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	
	return 0;
}

