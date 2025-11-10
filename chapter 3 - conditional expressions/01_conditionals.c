#include <stdio.h>

int main()
{
    int a;
    printf("enter a number:  ");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("you are selected beacuse your age is above 18 ");
    }
    else
    {
        printf("you are not selected beacuse your age is under 18");
    }
    return 0;
}