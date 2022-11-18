#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\Oluwatoyin Nathaniel\\Desktop\\index.html", "r");
    char buffer[255]; //this is to store every line in the file 

    //running the below alone will only print out the first line of the file
    /*fgets(buffer, 255, pF)
      printf("%s", buffer);
    */
    //but inserting it in a while loop fprints out all that's in the file
    //like below

    if(pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
        printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}