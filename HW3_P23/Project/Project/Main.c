#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rolldice();
enum status{Win,Lose,Continue};
int main(void)
{
    int sum,flag;
    enum status gamestatus;
    srand(time(NULL));
    sum= rolldice();
    switch (sum)
    {
        case 7:
        case 11:
            gamestatus = Win;
            break;
        case 2:
        case 3:
        case 12:
            gamestatus = Lose;
            break;
        default:
            gamestatus = Continue;
            flag = sum;
            printf("Point is %d\n",flag);
            break;
    }
    while (gamestatus == Continue)
    {
        sum = rolldice();
        if (sum == 7)
            gamestatus = Lose;
        else if (sum == flag)
            gamestatus = Win;
    }
    if (gamestatus == Win)
    {
        printf("Player Wins\n");
    }
    else if (gamestatus == Lose)
    {
        printf("Player Loses\n");
    }
    system("pause");
    return 0;
}
int rolldice(void)
{
    int n1,n2,gamesum;
    n1 = 1 + rand() % 6;
    n2 = 1 + rand() % 6;
    gamesum = n1 + n2;
    printf("Player rolled %d + %d = %d\n", n1, n2, gamesum);
    return gamesum;
}

