#include "sort.h"

/**
 * selection_sort - Selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array to sort
 */
void selection_sort(int *array, size_t size)
{
	unsigned long i, j, temp, max_index = 0;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[max_index])
				max_index = j;
		}
		/**Swap elements*/
		temp = array[i];
		array[i] = array[max_index];
		array[max_index] = temp;
		print_array(array, size);
	}
}
