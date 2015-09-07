#include <stdio.h>

#include "calc.h"

char *opnames[] = {"add", "sub", "mult", "div"};

int main(int argc, char *argv[]) {
	int a = 2;
	int b = 3;
	Calculator calc;

	printf("running calculations on %d and %d\n", a, b);

	for (int i = 0; i < 4; ++i) {
		calc.calculate = &add + 0x20*i;
		calc.result = calc.calculate(a, b);
		printf("%s:\t%d\n", opnames[i], calc.result);
	}

	return 0;
}
