#include <stdio.h>
#include <string.h>

struct player 
{
    char name[12];
    int score;
};

int main()
{
    //struct = collection of related members ("variables")
    //         they can be of different data types
    //         listed under one name in a block of memory
    //         VERY SIMILAR to classes in other language (but no methods)  

    struct player player1;
    struct player player2;

    strcpy(player1.name, "Victor");
    player1.score = 4;
     
    strcpy(player2.name, "AKACHUKWU");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%s\n", player1.score);

    printf("%s\n", player2.name);
    printf("%s\n", player2.score);

    return 0;
}