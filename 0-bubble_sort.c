#include "sort.h"

/**
 * bubble_sort - a function algorithm
 * @array: the array.
 * @size: array size.
 * Retrun: null
 */
void bubble_sort(int *array, size_t size)
{
size_t x;
size_t y;
size_t tmp = size;
int z;

while (array)
{
if (tmp < 2)
return;

x = 1;
z = 0;
while (x < tmp)
{
if (array[x - 1] > array[x])
{
y = array[x - 1];
array[x - 1] = array[x];
arrazy[x] = y;
z = 1;
print_array(array, size);
}
x++;
}
if (z == 0)
return;
tmp--;
}
}
