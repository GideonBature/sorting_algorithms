#include "sort.h"

/**
 * selection_sort - Selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array to sort
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min_index = 0;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;
		print_array(array, size);
	}
}
