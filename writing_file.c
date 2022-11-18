#include <stdio.h>

int main()
{
    FILE *pF = fopen("text.txt", "w");
    // the mode "w" is to overwrite whats in a file
    // while the mode "a" is to append the input to the end of a file
    // like this -- FILE *pF = fopen("text.txt", "a");
 
    fprintf(pF, "Spongebob Squarepants");

    fclose(pF);

    //this is to write a file to a diffrent
    //location like a diffrent file on your desktop
    FILE *pD = fopen("C:\\Users\\Oluwatoyin Nathaniel\\Desktop\\inex.html", "W");

    fprintf(pD, "the writer of this file is Victor");

    fclose(pD);

    // to delet a file
    if(remove("text.txt") == 0)
    {
        printf("that file was deleted successfully!");
    }
    else
    {
        printf("that file was NOT deleted!"); 
    }

    return 0;
}