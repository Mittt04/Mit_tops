//Vowel or Consonant using switch case

#include<stdio.h>
int main()
{
	char c;
	printf("enter the character : ");
	scanf("%c",&c);
		
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("given character is vowel");
			break;
		
		default:
			printf("given character is consonant");
	}
	return 0;
}
