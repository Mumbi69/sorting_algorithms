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
* partition - partition the array using the last element as pivot
* @array: the array we are partitioning
* @l: the lowest/minimum element
* @h: the highest elememt
* @size: size of the array
* Return: value of i
*/

int partition(int array[], int l, int h, size_t size)
{
	int pivot = array[h];
	int j, i = (l - 1);

	for (j = l; j < h; j++)
	{
		if (array[j] < pivot && array[++i] != array[j])
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	if (array[++i] != array[h])
	{
		swap(&array[i], &array[h]);
		print_array(array, size);
	}
	return (i);
}

/**
* recursion - we sort the array using recursion
* @array: the array we are sorting
* @l: the lowest/minimum index
* @h: the highest index
* @size: the size of the array
*/

void recursion(int *array, int l, int h, size_t size)
{
	if (l < h)
	{
		int pivot = partition(array, l, h, size);

		recursion(array, l, pivot - 1, size);
		recursion(array, pivot + 1, h, size);
	}
}

/**
* quick_sort - sorts an array of integers using Quick sort algorithm
* @array: the array we are sorting
* @size: the size of the array
*/

void quick_sort(int *array, size_t size)
{
	recursion(array, 0, (int)size - 1, size);
}
