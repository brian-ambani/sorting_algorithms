#include "sort.h"
/**
 * selection_sort - sorts an array of int
 * in ascending order using selection
 * sort
 * @array: pointer to the array
 * @size: the size of the array
 *
 * Return: NULL
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = j + i; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
