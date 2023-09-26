#include <stdio.h>
#include <math.h>

int add(double x, double y) {
	double result = x + y;
	return result;
}

int main() {
	double a = 9;
	double b = 10;
	printf("The sum of A and B is: %d", add(a,b));
}