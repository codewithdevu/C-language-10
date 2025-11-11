#include <stdio.h>


int factorial(int );
//factorial(5) = 1 X 2 X 3 X 4 X 5
//factorial(5) = 1 X 2 X 3 X 4 X 5
//factorial(5) = 1 X 2 X 3
//factorial(5) = 1 X 2 X 3 X ........ X n-1 X n
//factorial(5) = 1 X 2 X 3....... X n-1


int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    // factorial(n) = factorial (n-1) X n
    return factorial(n-1) * n;
}

int main() {
    int a ;

    printf("Enter the number: ");
    scanf("%d" , &a);

    printf("the factorial of %d is %d" , a ,  factorial(a));
    
    return 0;
}