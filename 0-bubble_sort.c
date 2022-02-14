#include "sort.h"

/**
 * swap - swap two values of an array
 * @array: array
 * @i1: index of the first value
 * @i2: index of the second value
 */
void swap(int **array, size_t i1, size_t i2)
{
	int tmp;

	tmp = (*array)[i1];
	(*array)[i1] = (*array)[i2];
	(*array)[i2] = tmp;
}
/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = size, newn, i;

	if (array == NULL || size < 2)
		return;

	while (n > 1)
	{
		newn = 0;
		for (i = 1; i <= (n - 1); i++)
		{
			if (array[i - 1] > array[i])
			{
				swap(&array, i - 1, i);
				print_array(array, size);
				newn = i;
			}
		}
		n = newn;
	}
}
