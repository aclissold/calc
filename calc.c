#include <stdio.h>

#include "calc.h"

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mult(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

int test(int a) {
	printf("hmm. %d\n", a);
	return -1;
}
