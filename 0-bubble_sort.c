#include "sort.h"

/**
 * bubble_sort - function that sorts an array of
 * in ascending order
 * @array: input arrray
 * @size: size of the array
 * Return: Null
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int temp, swap;

	for (swap = 1; len > 0 && swap; len--)
	{
		swap = 0;
		for (i = 0; (i + 1) < len; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
