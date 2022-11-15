#include <stdio.h>
#include <string.h>

typedef char user[25];

//using struct for the same purpose as typedef

typedef struct 
{
    char name[25];
    char password[12];
    int id;
} user;

int main()
{
    // typrdef = reserved keyword that give an existing datatype a "nickname"

    //char user1[25] = "Victor";
    
    /*
    so instead of the above we us ethe typedef to uses the work so instead of the above 
    we use below after seting typedef outside the main function
    */
    
    //user user1 = " victor";

    //so 'user'contain 'char user with an array of [25]'

    //using typedef for struct
    //so using the struct we call user out the main function without struct
    //preceeding user likw this -- 
    // struct user user1 = {"victor", "password123", 123456789};

    user user1 = {"victor", "password123", 123456789};
    user user2 = {"AKA", "pass1234", 1122334455};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%s\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%s\n", user2.id);

    return 0; 
}