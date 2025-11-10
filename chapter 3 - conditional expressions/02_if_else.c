#include <stdio.h>

int main()
{
    int i;
    printf("enter your age: ");
    scanf("%d" , &i);

    if (i < 18)
    {
        printf("your not adult\n");
    }

    else
    {
        printf("you are adult");
    }

}