#include<stdio.h>

int x = 153;
int main(){
    int a=0,b,i;
    x=i;
    lable:
    b=x%10;
    a= (b*b*b)+a;
    x=x/10;

    if(x>0)
    goto lable;

    if (a == i)
    {
        printf("It is armstrong");
        printf("\n");

    }

    else
    {
        printf("Not an armstrong");
        printf("\n");
    }
    
    

    return 0;
}