#include "sort.h"
#include <stdbool.h>
#include <stdio.h>

/**
* swap - swaps the list and arrays
* @m: first integer
* @n: second integer
*/

void swap(int *m, int *n)
{
	int temp = *m;
	*m = *n;
	*n = temp;
}

/**
* bubble_sort - sorts an array of integers using Bubble sort algorithm
* @array: the array we are sorting
* @size: the size of the array
*/

void bubble_sort(int *array, size_t size)
{
	int s, w;
	bool swapped;

	if (size <= 1)
		return;
	for (s = 0; s < (int) size - 1; s++)
	{
		swapped = 0;
		for (w = 0; w < (int) size - s - 1; w++)
		{
			if (array[w] > array[w + 1])
			{
				swap(&array[w], &array[w + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
