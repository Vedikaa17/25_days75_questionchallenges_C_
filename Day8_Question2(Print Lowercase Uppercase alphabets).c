#include <stdio.h>
int main()
{
	char c;
	printf("Enter u to display uppercase alphabets.\n");
	printf("Enter 1 to display lowercase alphabets.\n");
	scanf("%c" , &c);
	if (c == 'U' || c== 'u')
	{
		for (c = 'A'; c <= 'Z'; ++c)
		    printf("%c ", c);
	}
	else if (c == 'L'|| c == '1')
	{
		for (c = 'a'; c <= 'z'; ++c)
		    printf("%c", c);
	}
	else
	{
		printf("Error! You entered an invalid charcter.");
	}
	return 0;
}
