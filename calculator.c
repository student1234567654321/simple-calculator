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
		printf("Error: Division by zero. Ignore next printed line.\n");
		return 0;
	}
}

int main() {
	double a, b, valid, result;
	int choice, n;

	printf("Select operation:\n");
	printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
	scanf("%d", &choice);

	switch (choice) {
		case 1:
			printf("Enter two numbers: ");
			if (scanf("%lf %lf", &a, &b) != 2) {
				printf("Invalid input(s)!");
				break;
			}
			result = add(a, b);
			printf("Result: %.2lf\n", result);
			break;
		case 2:
			printf("Enter two numbers: ");
			if (scanf("%lf %lf", &a, &b) != 2) {
				printf("Invalid input(s)!");
				break;
			}
			result = sub(a, b);
			printf("Result: %.2lf\n", result);
			break;
		case 3:
			printf("Enter two numbers: ");
			if (scanf("%lf %lf", &a, &b) != 2) {
				printf("Invalid input(s)!");
				break;
			}
			result = mul(a, b);
			printf("Result: %.2lf\n", result);
			break;
		case 4:
			printf("Enter two numbers: ");
			if (scanf("%lf %lf", &a, &b) != 2) {
				printf("Invalid input(s)!");
				break;
			}
			result = div(a, b);
			printf("Result: %.2lf\n", result);
			break;
		default:
			printf("Invalid choice!\n");
	}

	return 0;
}