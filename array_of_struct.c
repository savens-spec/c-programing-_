#include <stdio.h>
#include <String.h>

struct student
{
    char name[12];
    float gpa;
};

int main()
{
    
    struct student student1 = {"Spongebob", 3.0};
    struct student student2 = {"Patrick", 2.5};
    struct student student3 = {"Sandy", 4.0};
    struct student student4 = {"Squidward", 2.0};

    struct student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}