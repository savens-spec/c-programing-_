#include <stdio.h>

int main(){
// varables are alocated space of memory to  to stor a value

int x; //declearation
x =123; //initialzation
int y = 321;  //declearation + initialization

int age = 21;
float gpa = 2.05;  //floating point number
char grade = 'c'; //string chracter
char name [] = "victor akachukwu";

printf("you are %d age years old\n", age);
printf("my name is %s\n", name);
printf("your average grade is %c\n", grade);
printf("your gpa is %f", gpa);

    return 0;
}