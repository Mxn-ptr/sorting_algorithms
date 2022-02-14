#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = size, newn, i;
	int tmp;

	if (array == NULL || size < 2)
		return;

	while (n > 1)
	{
		for (i = 1; i <= (n - 1); i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = tmp;
				print_array(array, size);
				newn = i;
			}
		}
		n = newn;
	}
}
