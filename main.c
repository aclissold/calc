#include <stdio.h>

#include "calc.h"

int main(int argc, char *argv[]) {
	int a = 2;
	int b = 3;
	Calculator calc;

	printf("running calculations on %d and %d\n", a, b);

	calc.calculate = add;
	int res = calc.calculate(a, b);
	printf("add: %d\n", res);

	calc.calculate = sub;
	res = calc.calculate(a, b);
	printf("sub: %d\n", res);

	calc.calculate = mult;
	res = calc.calculate(a, b);
	printf("mult: %d\n", res);

	calc.calculate = div;
	res = calc.calculate(a, b);
	printf("div: %d\n", res);

	return 0;
}
