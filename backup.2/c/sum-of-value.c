#include<stdio.h>

int main()
{
    int a,no,b, sum=0;
    printf("Enter 3 digit number: ");
    scanf("%d", &no);

    a = no%10;
    sum = sum+a;
    no = no/10;

    a = no%10;
    sum = sum+a;
    no = no/10;

    a = no%10;
    sum = sum+a;

    printf("sum of number: %d\n",sum);


    return 0;
}
