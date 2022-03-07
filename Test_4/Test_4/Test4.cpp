#include <stdio.h>
#include <math.h>
// ax^2+bx+c=0
class the_quadratic_equation_2 {
public:
	float a;
	float b;
	float c;
	the_quadratic_equation_2() {
		a = b = c = 0;
	}
	the_quadratic_equation_2(float a, float b, float c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void equation(float a, float b, float c) {
		if (a == 0) {
			printf("Equation has only 1 solution: %f.1f\r\n", (-c) / b);
		}
		else {
			float delta = (b * b) - (4 * a * c);
			if (delta > 0) {
				float x1 = (-b + sqrt(delta)) / (2 * a);
				float x2 = (-b - sqrt(delta)) / (2 * a);
				printf("The equation has 2 distinct solutions : x1 = %.1f , x2 = %.1f\r\n", x1, x2);
			}
			else if (delta == 0) {
				float x = (-b) / (2 * a);
				printf("The equation has 1 common solution x : %.1f", x);
			}
			else {
				printf("the equation has no solution!!!\r\n");
			}
		}
	}
};
int main() {
	the_quadratic_equation_2 A;
	A.equation(2, 3, 1);
	return 0;
}