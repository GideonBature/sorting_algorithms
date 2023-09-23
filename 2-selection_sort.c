#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int i, j, temp, max_index = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size - 1; j++)
		{
			if (array[j] < array[max_index])
				max_index = j;
		}
		/**Swap elements*/
		temp = array[i];
		array[i] = array[max_index];
		array[max_index] = array[temp];
	}
}
