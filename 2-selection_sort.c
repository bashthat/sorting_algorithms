#include "sort.h"
/**
 * selection_sort - sorts an array using a selection to sort algorithms
 * @array: array 
 * @size: size of array
 * Return: NULL
 */
void selection_sort(int *array, size_t size)
{
	int temp, kaz;
	size_t x, y;

	if (array == NULL)
	{
	return;
	}
	for (x = 0; x < size; x++)
	{
	idx = x;
	for (y = x + 1; y < size; y++)
	{
		if (array[y] < array[kaz])
		{
		kaz = y;
		}
	}
	if (array[kaz] < array[x])
	{
	temp = array[kaz];
	array[kaz] = array[x];
	array[x] = temp;
	print_array(array, size);
	}
}
}
