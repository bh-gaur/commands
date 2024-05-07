// program for swapping two numbers using third variable //

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a and b: \n");
    scanf(" %d%d", &a,&b);
    c=a;
    a=b;
    b=c;

    printf("Now the value of a is %d", a);
    printf("\n Now the value of b is %d", b);
    return 0;
}
