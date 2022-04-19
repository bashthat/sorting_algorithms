#include "sort.h"

/**
 * bubble_sort - a function algorithm
 * @array: the array.
 * @size: array size.
 * Retrun: null
 */
void bubble_sort(int *array, size_t size)
{
int lint = 1;
size_t i = 0;
while (lint == 1 && size > 1)
{
lint = 0;
for (i = 0; i < size - 1; i++)
{
if (array[(int) i] > array[(int) i + 1])
{
swap_list(array, (int) i, (int) i + 1);
print_array(array, size);
lint = 1;
}
}
}
}

void swap_list(int *array, int pos1, int pos2)
{
int xyz = array[pos1];
array[pos1] = array[pos2];
array[pos2] = xyz;
}
