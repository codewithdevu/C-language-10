#include <stdio.h>

int main() {
    for (int i = 0; i<16; i++)
    {
        if(i==5){
            // break ; // exit the loop now!
            continue ; // skip this iteration now
        }
        printf("the value of i is %d\n",i);
    }
    
    return 0;
}