#include<stdio.h>
#include<stdlib.h>

int maximum(int,int,int);

int main(void)
{
    int n1,n2,n3;
    double ans;
    printf("Enter three integers:");
    scanf_s("%d %d %d", &n1,&n2,&n3);
    printf("Maximum is: %d\n", maximum(n1, n2, n3));
    system("pause");
    return 0;
}

int maximum(int n1, int n2, int n3)
{
    int max=n1;
    if (max < n2)
    {
        max = n2;
    }
    if (max < n3)
    {
        max = n3;
    }
    return max;
}
