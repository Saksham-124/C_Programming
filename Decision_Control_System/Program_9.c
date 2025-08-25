/* If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three */ 

#include<stdio.h>
int main()
{
	int ram, shyam, ajay;
	
	printf("Ram please enter your age : ");
	scanf("%d", &ram);
	printf("Shyam please enter your age : ");
	scanf("%d", &shyam);
	printf("Ajay please enter your age : ");
	scanf("%d", &ajay);
	
	if(ram < shyam){
		printf("Ram is youngest : %d", ram);
	}
	else if(shyam < ram & shyam < ajay){
		printf("Shyam is youngest : %d", shyam);
	}
	else if(ajay < ram & ajay < shyam){
		printf("Ajay is yougest : %d", ajay);
	}
	else {
		printf("All are yougest");
	}
	return 0;
}
