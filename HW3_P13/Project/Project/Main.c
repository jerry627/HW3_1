#include<stdio.h>
#include<stdlib.h>
double power(double,int);

int main(void)
{
    int n;
    double ans;
    printf("計算3.5的k次方?請輸入k=");
    scanf_s("%d", &n);
    ans=power(3.5, n);
    printf("3.5的%d次方=%lf\n",n,ans);
    system("pause");
    return 0;
}

double power(double x,int n)
{
    double total=1;
    for (int i = 1; i <= n; i++)
    {
        total = total * x;
    }
    return total;
}
