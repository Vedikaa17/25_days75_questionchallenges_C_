#include <stdio.h>
int main()
{
	double first, second, temp;
	printf("Enter first number:");
	scanf("%1f", &first);
	printf("Enter secound number:");
	scanf("%1f, &secound");
	temp = first;
	first = second;
	second = temp;
	printf("\nAfter swapping, first number = %.21f\n", first);
	printf("After swapping, second number = %.21f", second);
	return 0;
 	
}
