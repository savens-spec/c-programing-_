#include <stdio.h>

void sort(int array[], int size)
{
    for(int i = 0; i < size -1; i++)
    {
        for(int j = 0; j < size -1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] =  temp;
            }
        }

    }
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}

int main()
{
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    //char array[] = {'F', 'A', 'D', 'B', 'C'};
    /*
    if you want to display the sort for the character string you
    will first change the function int to char, in the structure outside the main function
    and then remove the comment sign "//" for the code to run
    */
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size); 

    return 0;
}