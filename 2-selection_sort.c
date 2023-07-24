#include "sort.h"

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
* selection_sort - sorts an array of integers using selection sort
* @array: the array we are sorting
* @size: the size of the array
*/

void selection_sort(int *array, size_t size)
{
	size_t s, w, myIndex = 0;

	if (size <= 1)
		return;
	for (s = 0; s < size - 1; s++)
	{
		myIndex = s;
		for (w = myIndex + 1; w < size; w++)
		{
			if (array[w] < array[myIndex])
				myIndex = w;
		}
		if (myIndex != s)
		{
			swap(&array[s], &array[myIndex]);
			print_array(array, size);
		}
	}
}
