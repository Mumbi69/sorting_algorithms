#include "sort.h"
#include <stdbool.h>
#include <stdio.h>

/**
* swap - swaps the list and arrays
* @m: first integer
* @n: second integer
* Return: Nothing
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
*
* Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	int s, w, l;
	bool swapped;

	for (s = 0; s < (int) size - 1; s++)
	{
		swapped = 0;
		for (w = 0; w < (int) size - s - 1; w++)
		{
			if (array[w] > array[w + 1])
			{
				swap(&array[w], &array[w + 1]);
				for (l = 0; l < (int) size; l++)
				{
					printf("%d", array[l]);
					if (l < (int) size - 1)
						printf(", ");
				}
				printf("\n");
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
