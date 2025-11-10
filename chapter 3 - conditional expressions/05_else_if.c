#include <stdio.h>

int main(){
    int a ;
    printf("Enter the value: ");
    scanf("%d" , &a);
    
    if(a>=60){
        printf("you are selected and your age is above 60 and you are senior citizen");
    }
    
    else if(a>30){
        printf("you are selected and your age is above 30 and you are mature person");
    }

    else if(a>18){
        printf("you are selected for license");
    }

    else{
        printf("you are not selected");
    }

    return 0;
}