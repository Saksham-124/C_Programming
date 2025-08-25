/* Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line. 

   Slope Formula : (y3-y2) / (x3-x2) == (y2-y1) / (x2-x1)
*/

#include<stdio.h>
int main()
{
	int x1, y1, x2, y2, x3, y3;
	printf("Enter value x1 and y1 : ");
	scanf("%d%d",&x1, &y1);
	printf("Enter value x2 and y2 : ");
	scanf("%d%d",&x2,&y2);
	printf("Enter value x3 and y3 : ");
	scanf("%d%d",&x3,&y3);
	
	if(((y3-y2) / (x3-x2)) == ((y2-y1) / (x2-x1))){
		printf("Three points are one straight line");
	} else {
		printf("Three points are not straight line");
	}
	return 0;
}
