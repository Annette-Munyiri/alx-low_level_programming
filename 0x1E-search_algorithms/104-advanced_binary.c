#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively using binary search
 * @array: A pointer to the first element
 * @left: The starting index
 * @right: The ending index
 * @value: value to search for
 *
 * Return: If the value is not present, -1
 * Otherwise, the index where the value is located
 *
 * Description: Prints the [sub]array being searched after each change
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a value
 * using advanced binary search.
 * @array: A pointer to the first element
 * @size: The number of elements
 * @value: The value to search for
 *
 * Return: If the value is not present or the array is NULL, -1
 * Otherwise, the first index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
