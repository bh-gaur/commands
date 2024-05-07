
#include<stdio.h>

int main()
{
    int a,no,b,rev=0;
    printf("Enter 3 digit number: ");
    scanf("%d", &no);

    a = no%10;
    rev = rev + a*100;
    no = no/10;

    a = no%10;
    rev = rev + a*10;
    no = no/10;

    a = no%10;
    rev = rev + a;

    printf("%d\n",rev);

    return 0;
}
