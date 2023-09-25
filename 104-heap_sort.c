#include "sort.h"

/**
 * heap_sort - Heap sort
 * @array: Array to sort
 * @size: Size of array
 */
void heap_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL || size == 0)
		return;

	print_array(array, size);
}
