#include <stdio.h>

int main()
{

    int i = 10; // declere and  initialize 'i '  with 10
    int j = i;
    int a = 2, b = 3, c = 4, d = 5;

    float e=3.4;

    // %d is called format specificr
    // %d is for int , $f is for float and %c is for  char
    printf("the value of i is: %d\n and value of j :%d\n", i, j);
    printf("the value of a is: %d\n and value of b is :%d\n", a, b);
    printf("the value of c is: %d\n and value of d is :%d\n", c, d);

    printf("value of e :%f",e);
    return 0;
}
