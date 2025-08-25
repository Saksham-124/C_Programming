/* Using conditional operators determine:
	
	(1) Whether the character entered through the keyboard is a lower case alphabet or not.
	(2) Whether a character entered through the keyboard is a special symbol or not.

*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet [a-z], [A-Z] or Special symbol [!,@,#...] : ");
	scanf("%c",&ch);
	
	// Check for the lower case
	(ch >= 97 && ch <= 112) ? printf("Lower case\n") : printf("Not a lower case : %c\n",ch);
	
	// Check for the special symbol
	((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)) ? printf("Special symbol\n") : printf("Not a special symbol\n");
	getch();
	return 0;
}
