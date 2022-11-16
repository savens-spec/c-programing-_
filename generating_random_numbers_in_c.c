#include <stdio.h>
#include  <stdlib.h>
#include <time.h>

int main()
{
    //pseudo random numbers = a set of values or elements that are statistically random
    //                          (don't use these for any sort of cryptographic security)

    srand(time(0));
    
    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    //the above gives us a random number from 1 - 6
    //but if i need a number from 0 to 5 then, it will be
    //rand() % 6 and not the above...
    // the rand function will gove you a reandome number
    //between 0 - 32,767

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);
    return 0;
}