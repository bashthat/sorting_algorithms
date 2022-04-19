#include "sort.h"

/**
 * bubble_sort -sorting algorithm
 * @array: sorted array
 * @size: array length
 */
void bubble_sort(int *array, size_t size)
{
size_t abc, xyz;
int tmp, gg;
if (size < 2)

return;

for (abc = 0; abc < size; abc++)
{
gg = 0;
for (xyz = 0; xyz < size - 1; xyz++)
{
if (array[xyz] > array[xyz + 1])
{
tmp = array[xyz];
array[xyz] = array[xyz + 1];
array[xyz + 1] = tmp;
print_array(array, size);
gg = 1;
}
}
if (gg == 0)
return;
}
}
