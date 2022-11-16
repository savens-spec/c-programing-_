#include <stdio.h>

enum day{sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};

int main()
{
    //enum = a user defined type of name inttergeer identifers
    //       helps to make a program moreraedable

     enum day today = sun;
     printf("%d", today);  //enums are NOT STRINGS, but they can be treated as int
     if(today == sun || today == sat)
     {
        printf("it's weekend!");

     }
     else
     {
        printf("i have to work today :(");

     }

    return 0;
}