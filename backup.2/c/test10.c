// Printing even and odd numbers //

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;

    printf("Even numbers from 1 to 100:\n");
    for ( i = 1; i <= 100; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
        
    }
    printf("\n \n");

    printf("Odd numbers from 1 to 100:\n");
    for ( j = 1; j <= 100; j++)
    {
        if (j%2==1)
        {
            printf("%d ",j);
        }
        
    }
    printf("\n");    
    
    return 0;
}
