#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int binary(int*, int, int);

void main(){
    int size = 5, pos, itm;
    int arr[5] = {32, 435, 12, 546, 342};
    printf("\nList: \n");
    for (int i = 0; i < size; i++)printf("%d\t", arr[i]);
    printf("\nEnter the item to search:\n");
    scanf("%d", &itm);
    pos = binary(arr, size, itm);
    printf("Item on position: %d", pos);
}

int binary(int *arr, int size, int itm){
    int lw, up, mid;
    lw = 0;
    up = size-1;
    while (lw <= up)
    {
        mid = (lw+up)/2;
    /* compare the array element at mid with the target */
    if (arr[mid] == itm) return mid;
        if (itm > arr[mid])lw = mid+1;
        if (itm < arr[mid]) up = mid-1;
    }
    return -1;
}