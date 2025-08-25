/* WAP to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. 
   A triangle is valid if the sum of all the three angles is equal to 180 degrees. */

#include<stdio.h>
int main(){
	
	int rightSide, leftSide, base, sum, degree = 180;
	
	printf("Enter right side of triangle : ");
	scanf("%d",&rightSide);
    printf("Enter left side of triangle : ");
	scanf("%d",&leftSide);
	printf("Enter base of triangle : ");
	scanf("%d",&base);
	
	sum = rightSide + leftSide + base;
	
	if(sum == degree){
		printf("\nTriangle is valid : %d",sum);
	}
	else {
		printf("\nTriangle is not valid : %d",sum);
	}
		
	return 0;
}

