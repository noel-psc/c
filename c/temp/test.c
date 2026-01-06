#include <stdio.h>

_Bool if_sorted(double *array, int len);
double *bubble_sort(double *array, int len);

int main(void)
{
	int len = sizeof(array) / sizeof(array[0]);
	double array[] = {1.1, 5, 1, 0, 9, 55, 66854, 52};
	
	double *sorted_array = bubble_sort(array, len);
	for (int i = 0; i < len; i++)
	{
		printf("%.2f\n", array[i]);
	}

	return 0;
}

_Bool if_sorted(double *array, int len)
{
	for (int i = 0; i < len - 2; i++)
	{
		if (array[i] > array[i+1])
		{
			return 0;
		}
	}

	return 1;

}

double *bubble_sort(double *array, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (if_sorted(array, len))
			{
				// printf("break%d\n", if_sorted(array, len));
				break;
			}
			else if (array[j] > array[j+1])
			{
				double temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				// printf("exchange%.2f %.2f\n", temp, array[j]);
			}
		}
	}

	return array;
}


