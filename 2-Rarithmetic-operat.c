#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a + b;

    printf("the value a is : %d\n and the value of b: %d\n the sum is : %d\n ", a, b, c);

    // MODUS OPERATOR IS USED TO GET THE REMAINDE

        printf("the remainder of a is divided by b is : %d", a % b);

    // this does not work for exponetition in C
    //  int d = a^b;

    return 0;
}
