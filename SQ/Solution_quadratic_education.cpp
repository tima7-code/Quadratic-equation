#define _CRT_SECURE_NO_WARNINGS
#include "Solution_quadratic_education.h"

int main()
{
	float *coefficient = (float *)malloc(3 * sizeof(float));

	printf("Enter the values of the coefficients a, b, c: \n");
	for (int i = 0; i < 3; i++)
	{
		while (scanf("%f", &coefficient[i]) != 1)
		{
			printf("Enter the correct coefficient value: \n");
			while (getchar() != '\n');
		}
	}

	if (coefficient[0] == 0)
		printf("\nx = %f", Solution_linear_education(coefficient));
	else
	{
		if (coefficient[2] == 0)
		{
			printf("x1 = 0, x2 = %f", Solution_zero_C(coefficient));
			exit(0);
		}
		if (Discriminant(coefficient) < 0)
			printf("No valid roots exist");
		else
		{
			if (Discriminant(coefficient) == 0)
				printf("\nx = %f", Solution(coefficient, Discriminant(coefficient)));
			else
				printf("\nx1 = %f, x2 = %f", Solution(coefficient, Discriminant(coefficient)), Solution(coefficient, -Discriminant(coefficient)));

		}
	}
}