//Sum of first n terms of fibbonachi series.

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <alloc.h>


void main(){
    int n, l2, l1, temp,sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    l2, l1 = 1, 1;
    sum+= l2;
    for (int i = 0; i< n; i++){
        temp = l1+l2;
        l2 = l1;
        l1 = temp;
        sum+= temp;
    }
    printf("Sum of the first %d items in fibbinache series is: %d", n, sum);
}