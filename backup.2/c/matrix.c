#include<stdio.h>

int main()
{
    int i, j, a[2][3], b[2][3];

    printf("Enter the values:\n");

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


    printf("Given matrix is:\n");
    
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
   

    return 0;
}
