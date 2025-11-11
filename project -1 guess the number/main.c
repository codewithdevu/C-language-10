#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // initialize random number generator
    srand(time(0));

    // random number generate karna (1 se 100 ke beech)
    int randomNumber = (rand() % 100) + 1;
    int no_of_guessed = 0 ;
    int guessed ;

    // printf("Random number: %d\n", randomNumber);

    do
    {
        printf("Guess the number: ");
        scanf ("%d", &guessed);
        if(guessed<randomNumber){
            printf("guess the higher number please !\n");
        }

        else if (guessed==randomNumber){
            printf("Right guess!");
        }

        else{
            printf("guess the lower number please !\n");
        }
        no_of_guessed++ ;

    } while (guessed!=randomNumber);

    printf("you guessed the number in %d guesses\n", no_of_guessed);
    

    return 0;
}
