#include<stdio.h>
#include<stdlib.h>

int square(int y);

int main(void)
{
    int x;
    for (int i = 1; i <= 10; i++)
    {
        x = square(i);
        printf("%d ",x);
    }
    printf("\n");
    system("pause");
    return 0;
}

int square(int y)
{
    return y * y;
}