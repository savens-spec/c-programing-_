#include<stdio.h>

/*
this function called void(below) is considered the best practice 
in codding when we see need to repeat a code
insead of multiple lines of repeated code we declear a function outside
the main function.
and that decleared function can be refeared to inside the main function
*/
void birthday(char name[], int age) 
{
    printf("\nHappy birthday to you %s!", name);
    printf("\nYou are %d years old!", age);
}

int main()
{
    char name[] = "Victor";
    int age = 18;

    birthday(name, age);

    return 0;
}