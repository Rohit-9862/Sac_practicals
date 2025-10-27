#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int search(int*, int, int);

void main(){
    int size = 5;
    int arr[5] = {15,34,2312,43,21}, itm,pos;
    printf("\nList: \n");
    for (int i = 0; i < size; i++)printf("%d\t", arr[i]);
    printf("\nEnter the item you want to search: ");
    scanf("%d", &itm);
    pos = search(&arr, size, itm);
    printf("Itm on %d index", pos);
}

int search(int *list, int size, int item){
    for (int i = 0; i < size; i++) if (list[i] == item) return i;
    return NULL;   
}