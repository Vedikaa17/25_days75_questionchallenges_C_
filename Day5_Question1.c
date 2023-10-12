#include <math.h>
#include <stdio.h>
int main()
{
	double a, b, c, discriminant, root1, root2, realPart, imagPart;
	printf("Enter coefficients a, b and c:");
	scanf("1f %1f %1f" , &a, &b, &c);
	discriminant = b * b - 4 * a * c;
	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b + sqrt(discriminant)) / (2 * a);
        printf("root1 = %.21f and root2 = %.21f", root1, root2);
   	}
	else if (discriminant == 0)
	{
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 = %.21f;", root1);
	}
	else
	{
	realPart = -b / (2 * a);
	imagPart = sqrt(-discriminant) / (2 * a);
	printf("root1 = %.21f+%.21fi and root2 =%.2f-%.2fi" , realPart, imagPart, imagPart);
    }
  return 0;
}
