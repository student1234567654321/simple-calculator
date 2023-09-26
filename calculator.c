#include <stdio.h>
#include <math.h>

int add(double x, double y) {
	double result = x + y;
	return result;
}

int sub(double x, double y) {
	double result = x - y;
	return result;
}

int mul(double x, double y) {
	double result = x * y;
	return result;
}

int div(double x, double y) {
	if (y != 0) {
		return x / y;
	}
	else {
		printf("\nError: Division by zero. Ignore next printed line.\n");
		return 0;
	}
}

int main() {
	double a = 18;
	double b = 0;
	printf("The sum of A and B is: %d\n", add(a,b));
	printf("The difference of A and B is: %d\n", sub(a,b));
	printf("The product of A and B is: %d\n", mul(a,b));
	printf("The quotient of A and B is: %d\n", div(a,b));
}