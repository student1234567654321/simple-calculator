#include <stdio.h>
#include <math.h>

int add(double x, double y) {	//add function
	double result = x + y;
	return result;
}

int sub(double x, double y) {	//subtract function
	double result = x - y;
	return result;
}

int mul(double x, double y) {	//multiply function
	double result = x * y;
	return result;
}

int div(double x, double y) {	//divide function
	if (y != 0) { 
		return x / y;
	}
	else {			// will make sure answer is not undefined
		printf("Error: Division by zero. Ignore next printed line.\n");
		return 0;
	}
}

int main() {
	double a, b, valid, result;
	int choice, n;

	printf("Select operation:\n");
	printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
	scanf("%d", &choice);	//user inputs are integers

	switch (choice) {					//checks which operation will execute
		case 1:
			printf("Enter two numbers: ");
			if (scanf("%d %d", &a, &b) != 2) {	//checks if at least one input is not a number
				printf("Invalid input(s)!");	//if an input is not number, prints error message
				break;
			}
			result = add(a, b);			//performs desired operation
			printf("Result: %.2lf\n", result);	//outputs result as string
			break;					//ends switch
		case 2:						// see explanations from case 1
			printf("Enter two numbers: ");
			if (scanf("%d %d", &a, &b) != 2) {
				printf("Invalid input(s)!");
				break;
			}
			result = sub(a, b);
			printf("Result: %.2lf\n", result);
			break;
		case 3:						// see explanations from case 1
			printf("Enter two numbers: ");
			if (scanf("%d %d", &a, &b) != 2) {
				printf("Invalid input(s)!");
				break;
			}
			result = mul(a, b);
			printf("Result: %.2lf\n", result);
			break;
		case 4:						// see explanations from case 1
			printf("Enter two numbers: ");
			if (scanf("%d %d", &a, &b) != 2) {
				printf("Invalid input(s)!");
				break;
			}
			result = div(a, b);
			printf("Result: %.2lf\n", result);
			break;
		default:					//if user input for choice is not 1,2,3 or 4...
			printf("Invalid choice!\n");		//an error message is printed
	}

	return 0;
}