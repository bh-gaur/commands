#include<stdio.h>

int main()
{
    int A=1,B=0,C=0,n;
    printf("Enter the value on n:");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", C);
    
        B=A;
        A=C;
        C=A+B;
    }
    printf("\n");
    
    return 0;
}
