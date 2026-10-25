#include <stdio.h>

int main(void) {
    int input;
    double result_double;
    int result_int;

    scanf("%d", &input);

    result_double = (double)input * 1.08;
    result_int = (int)result_double;

    printf("%d\n", result_int);

    return 0;
}
