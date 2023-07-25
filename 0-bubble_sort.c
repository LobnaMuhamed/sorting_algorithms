#include "sort.h"

/**
 * swap - swap two integers
 * @x: first input integer's pointer
 * @y: second input integer's pointer
*/

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - a function that sorts an array of ints in
 *      ascending order
 * @array: array input
 * @size: size of an array
*/


void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped = 0;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;

	}
}
