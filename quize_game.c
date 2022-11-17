#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"1. what year did the c language debut?:",
                            " 2. who is the credited with creating C?:",
                            " 3. what is the predecessor of C?:"};
    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                             "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown"
                             "A. Objetive C", "B. B", "C. C++", "D. C#"};
    char answers[3] = {'B', 'A', 'B'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;

    for (int i = 0; i < numberOfQuestions ; i++)
    {
        printf("**************************");
        printf("%s\n", questions[i]);
        printf("**************************");
    }
     

    return 0;
}