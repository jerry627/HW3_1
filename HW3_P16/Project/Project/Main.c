#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        printf("%.2f ",sqrt(n));
    }
    printf("\n");
    system("pause");
    return 0;
}

