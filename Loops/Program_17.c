/* Write a program to print out all Armstrong numbers between 1 and 500. 
   If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number.
   For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int num,temp,digits,digit,sum;
	
	printf("Armstrong Numbers are : ");
	for(num=1;num<=500;num++){
		temp = num;
		digits = 0;
		sum = 0;
		
		int t = temp;
		while(t!=0){
			t = t / 10;
			digits++;
		}
		
		t = temp;
		while(t!=0){
			digit = t % 10;
			sum = sum + pow(digit,digits);
			t = t / 10;
		}
			if(sum == num){
				if(sum > 10){
					printf("%d ",num);
				}
			}
	}
	return 0;
}
