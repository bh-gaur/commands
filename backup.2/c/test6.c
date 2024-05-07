#include<stdio.h>

int main()
{
    int t, rev=0, n=321;

    while (n>0)
    {
        t=n%10;
        rev = (rev*10)+t;
        n=n/10;
    }
    printf("%d",rev);
    printf("\n");
    
    return 0;
}
