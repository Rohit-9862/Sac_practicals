#include <stdio.h>

void insertionsort(int a[], int size);

int main(void)
{
	int arr[] = {25, 17, 31, 13, 2};
	int i;

	printf("Insertion sort\n");
	printf("Array before sorting:\n");
	for (i = 0; i < 5; i++)
		printf("%d\t", arr[i]);

	insertionsort(arr, 5);

	printf("\nArray after sorting:\n");
	for (i = 0; i < 5; i++)
		printf("%d\t", arr[i]);

	printf("\n");
	return 0;
}

void insertionsort(int a[], int size)
{
	int i, j, temp;

	for (i = 1; i < size; i++) {
		temp = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > temp) {
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = temp;
	}
}
