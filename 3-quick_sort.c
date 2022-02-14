#include "sort.h"

/**
 * quick_sort - sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	size_t j, i;
	int piv, tmp;

	if (size < 2)
		return;

	piv = array[size - 1];
	j  = i = 0;
	while (i < size)
	{
		if (array[i] <= piv)
		{
			if (j != i)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
	quick_sort(array, j - 1);
	quick_sort(array + j - 1, size - j + 1);
}
