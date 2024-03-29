/*Write a C program to find an element from a given array using recursive Linear
Search technique.*/
#include <stdio.h>


int elmntSrch(int arr[], int size, int x)
{
    int rec;
    size--;
    if (size >= 0)
    {
        if (arr[size] == x)
            return size;
        else
            rec = elmntSrch(arr, size, x);
    }
    else
        return -1;

    return rec;
}

int main(void)
{
    int arr[] = {12, 34, 54, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int indx;

    indx = elmntSrch(arr, size, x);

    if (indx != -1)
        printf("Element %d is present at %d position", x, indx+1);
    else
        printf("Element %d is not present", x);

    return 0;
}