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
 * quick_sort - sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quicksort_(array, 0, size - 1, size);
}

/**
 * quicksort_ - function for help
 * @array: array to sort
 * @left: index of the left element
 * @right: index of the right element
 * @size: size of th array
 */
void quicksort_(int *array, int left, int right, size_t size)
{
	int piv;

	if (left >= right || left < 0)
		return;

	piv = partition(array, left, right, size);
	quicksort_(array, left, piv - 1, size);
	quicksort_(array, piv + 1, right, size);
}

/**
 * partition - give an index for the quicksort
 * @array: array to find the piv in
 * @left: index of the left element
 * @right: index of the right element
 * @size: size of the array
 * Return: the index of the piv
 */

int partition(int *array, int left, int right, size_t size)
{
	int piv, i, j;

	piv = array[right];
	i = left - 1;

	for (j = left; j < right; j++)
	{
		if (array[j] < piv)
		{
			i++;
			if (i != j)
			{
				swap(&array, i, j);
				print_array(array, size);
			}
		}
	}
	if (array[right] < array[i + 1])
	{
		swap(&array, right, i + 1);
		print_array(array, size);
	}
	return (i + 1);
}
