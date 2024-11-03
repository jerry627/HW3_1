#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int main(void)
{
    int i;
    
    for (i = 1; i <= 10; i++)
    {
        printf("%2d! = %d\n",i, factorial(i));
    }
    printf("\n");
    system("pause");
    return 0;
}
int factorial(int x)
{
    int total;
    if (x >= 1)
    {
        total = x * factorial(x - 1);
        return total;
    }
    else
    {
        return 1;
    }
}

