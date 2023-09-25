#include "sort.h"

/**
 * quick_sort - Quick sort algo
 * @array: Array to sort
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1, partition;

	if (size < 2 || array == NULL || size == 0)
		return;

	if (low < high)
	{
		partition = lom_part(array, low, high, size);
		quick_sort(array, (partition - 1) - low);
		quick_sort(array, high - (partition + 1));
	}
}

/**
 * lom_part - Implementation of the lomuto partition
 * @array: Array to partition
 * @low: Lower band
 * @high: Higher band
 * @size: Size of the array
 *
 * Return: Index of partition
 */
int lom_part(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (pivot >= array[j])
		{
			i++;
			swap(array, i, j, size);
		}
	}
	swap(array, i + 1, high, size);

	return (i + 1);
}

/**
 * swap - Swap array given index of value
 * @array: Array to swap
 * @i: First index
 * @j: Second index
 * @size: Size of the array
 */
void swap(int *array, int i, int j, size_t size)
{
	int temp = array[i];

	array[i] = array[j];
	array[j] = temp;
	print_array(array, size);
}
