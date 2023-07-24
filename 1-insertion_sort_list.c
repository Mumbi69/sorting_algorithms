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
* insertion_sort_list - sorts a doubly linked list using insertion algorithm
* @list: the list to be sorted
*/

void insertion_sort_list(listint_t **list);
{
	listint_t prev, next;






















