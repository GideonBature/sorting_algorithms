#include "sort.h"

/**
 * shell_sort - Shell sort
 * @array: Array to sort
 * @size: Size of array
 */
void shell_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL || size == 0)
		return;

	print_array(array, size);
}
