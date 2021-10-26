#include "../sort.h"

void geusa_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
void shell_sort(int *array, size_t size)
{
	size_t dif, i, j;

	if (array == NULL || size < 2)
		return;

	for (dif = 1; dif < (size / 3);)
		dif = dif * 3 + 1;

	for (; dif >= 1; dif /= 3)
	{
		for (i = dif; i < size; i++)
		{
			j = i;
			while (j >= dif && array[j - dif] > array[j])
			{
				geusa_ints(array + j, array + (j - dif));
				j -= dif;
			}
		}
		print_array(array, size);
	}
}
