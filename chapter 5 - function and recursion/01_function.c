#include <stdio.h>

// function prototype
int sum(int , int);

// function definetion 
int sum(int x , int y ){
    printf("the sum of a and b is %d\n", x+y);
    return x+y ;
}
int main() {
    int a,b ;

    a = 13;
    b = 10;

    int c = sum(a,b); // function call
    printf ("%d\n" , c);

    int ab , bc ;

    ab = 45;
    bc = 10;

    sum(ab,bc);


    return 0;
}