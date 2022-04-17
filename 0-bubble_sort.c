#include "sort.h"

/**
 * bubble_sort - a function to perform a bubble sort ordering system with an algorithm
 * @array: the array.
 * @size: array size.
 * Retrun: null
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int z;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - 1; y++)
		{
		if (array[y] > array[y + 1])
		{
			z = array[y + 1];
			array[y] = array[y + 1];
			array[y] = z;
			print_array(array, size);
		}
		}
	}
}
