#include <stdio.h>

int main()
{
    // poinyers = a "variable-like" refrence that a memory adress to another varable array, etc.
    //            some task are performed more eaisly with pointers
    //            * - indirection operator (value at address) 

    int age = 21;
    int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of pAge:%p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value pf age: %d\n", age);

    return 0;
}