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

int main() {
	double a = 9;
	double b = 10;
	printf("The sum of A and B is: %d\n", add(a,b));
	printf("The difference of A and B is: %d\n", sub(a,b));
}