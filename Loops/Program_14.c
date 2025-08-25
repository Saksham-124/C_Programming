/* Enter the Ten No through the Keyboard. WAP to check (negative, Positive or Zero). */

#include<stdio.h>
int main()
{
	int i,num;
	
	for(i=1;i<=10;i++){
		printf("Enter Number %d : ",i);
		scanf("%d",&num);
		
		if(num < 0){
			printf("Negative Numbers : %d\n\n",num);
		}
		else if(num > 0){
			printf("Postive Numbers : %d\n\n",num);
		}
		else{
			printf("Zero : %d\n\n",num);
		}
	}
	
	return 0;
}
