#include "Solution_quadratic_education.h"

float Solution(float * coefficient, float discriminant)
{
	return ((-coefficient[1] + discriminant) / (2 * coefficient[0]));
}