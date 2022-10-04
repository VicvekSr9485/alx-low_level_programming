#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers using the binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

 int binary_search(int *array, size_t size, int value)
 {
        size_t mid = size / 2;
        if (array[mid] > value)
	        return binary_search(array, value, mid);
        else if (array[mid] < value)
	        return mid + binary_search(&array[mid], value, (size + 1)/2);
        else
	        return mid;
 }
