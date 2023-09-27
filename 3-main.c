#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {1, 12, 14, 15, 25, 17, 8, 9, 10, 28,
    13, 100, 103, 105, 29, 3, 7, 6, 0, 11, 4, 5, 2, 1, 2, 34,22,55,90,76,54,23,14,23,78,9,0,9,5,7,3,6,4,25};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
