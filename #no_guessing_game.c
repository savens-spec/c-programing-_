#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    //uses the current time as a seed
    sran(time(0));

    //generate a random number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    do{
        print("Enter a guess: ");
        scanf("%d", &guess);

        if(guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    }while(guess != answer);
    
    Printf("****************************\n");
    printf("answer: %dd\n", answer);
    printf("guesses: %d\n", guesses);
    Printf("****************************\n ");

    return 0;
}