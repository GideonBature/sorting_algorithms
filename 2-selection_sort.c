 #include "sort.h"

/**
 * selection_sort - Selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array to sort
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;

	if (size < 2 || array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
