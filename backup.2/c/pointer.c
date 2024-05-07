#include<stdio.h>


int main()
{
    int a,b,c;
    printf("Enter value of a, b and c:");
    scanf("%d %d %d",&a,&b,&c);

    printf(" a=%d\n b=%d\n c=%d\n", a,b,c);

    int *x= &c ;

    

    printf(" %d\n",*x);
    return 0;
}
