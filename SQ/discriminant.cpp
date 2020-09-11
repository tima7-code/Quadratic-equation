#include "Solution_quadratic_education.h"

float Discriminant(float * coefficient)
{
	if (coefficient[1] * coefficient[1] - 4 * coefficient[0] * coefficient[2] < 0)
		return -1;
	else
		return sqrt(coefficient[1] * coefficient[1] - 4 * coefficient[0] * coefficient[2]);
}