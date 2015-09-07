#ifndef CALC_H
#define CALC_H

/* A Calculator performs an Operation. */
typedef int (*Operation)(int a, int b);
typedef struct calculator {
    Operation calculate;
    int result;
} Calculator;

/* Operations. */
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a, int b);
int test(int a);

#endif
