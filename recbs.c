#include <stdio.h>

int recbinsearch(int a[], int num, int lower, int upper);

int main(void)
{
	int arr[] = {1, 2, 3, 9, 11, 13, 17, 25, 57, 90};
	int num, pos;

	printf("Enter number to search: ");
	if (scanf("%d", &num) != 1) {
		fprintf(stderr, "Invalid input\n");
		return 1;
	}

	/* upper index is size-1 (10 elements => index 9) */
	pos = recbinsearch(arr, num, 0, 9);
	if (pos == -1)
		printf("Number is not present in the array\n");
	else
		printf("Number is at position %d in the array\n", pos);

	return 0;
}

int recbinsearch(int a[], int num, int lower, int upper)
{
	int mid;

	if (lower <= upper) {
		mid = (lower + upper) / 2;
		if (num == a[mid])
			return mid;

		if (num > a[mid])
			lower = mid + 1;
		else
			upper = mid - 1;

		return recbinsearch(a, num, lower, upper);
	}

	return -1;
}