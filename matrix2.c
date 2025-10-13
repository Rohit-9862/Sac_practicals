//basic maths operatio logic error!

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>//uncomment this line of code?
//#include <alloc.h>//uncomment this line of code?

//#define clrscr() system("cls")//remove this line of code?


void lne();
int main(){
    int row, col,l;
    //clrscr();
    printf("\nEnter the row and col of the array ");
    scanf("%d %d", &row, &col);
    printf("\nThe size of array is %d with row, col = %d, %d\n", row*col, row, col);
    
    printf("\n\nEnter data for the first matrix\n");
    int *array1 = (int *)malloc((row*col)*sizeof(int));
    if (!array1){
        printf("Error while allocating memory for array");
        return 1;
    }

    for(int i = 0; i < row; i++){
        for (int j = 0; j <col; j++){  
            printf("\nEnter the %d %d item of the array: ", i, j);
            scanf("%d", &array1[i*j+j]);
        }
    }
    printf("\n\nEnter data for the second matrix\n");
    int *array2 = (int *)malloc((row*col)*sizeof(int));
    if (!array2){
        printf("Error while allocating memory for array");
        return 1;
    }

    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("\nEnter the %d %d item of the array: ", i, j);
            scanf("%d", &array2[i*j+j]);
        }
    }
    //system("cls");
    lne();
    printf("\t\tThe result of basic maths opration on matrix");
    lne();
    printf("\n\nFirst matrix is:\n");
    for(int i = 0; i < row; i++){
        for(l = 0; l < col*(6+col); l++) printf("_");
        printf("\n|");
        for (int j = 0; j < col; j++){
            printf("%d\t|",array1[i*j+j]);
        }
        printf("\n");
    }
    for( l = 0; l < col*(6+col); l++) printf("_");
    printf("\n\n");
    printf("\n\nSecond matrix is:\n");
    for(int i = 0; i < row; i++){
        for(l = 0; l < col*(6+col); l++) printf("_");
        printf("\n|");
        for (int j = 0; j < col; j++){
            printf("%d\t|",array1[i*j+j]);
        }
        printf("\n");
    }
    for( l = 0; l < col*(6+col); l++) printf("_");

    int *array3 = (int *)malloc((row*col)*sizeof(int));//Calculating the sum
    if (!array3){
        printf("Error while allocating memory for array");
        return 1;
    }
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            array3[i*j+j] = array1[i*j+j]+array2[i*j+j];
        }
    }
    printf("\n\nThe sum of the 2 array is:\n");
    for(int i = 0; i < row; i++){
        for(l = 0; l < col*(6+col); l++) printf("_");
        printf("\n|");
        for (int j = 0; j < col; j++){
            printf("%d\t|",array3[i*j+j]);
        }
        printf("\n");
    }
    for( l = 0; l < col*(6+col); l++) printf("_");

    int *array4 = (int *)malloc((row*col)*sizeof(int));//Calculating the subtraction
    if (!array4){
        printf("Error while allocating memory for array\n");
        return 1;
    }
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            array4[i*j+j] = array1[i*j+j]-array2[i*j+j];
        }
    }
    printf("\n\nThe subraction of the 2 array is:\n");
    for(int i = 0; i < row; i++){
        for(l = 0; l < col*(6+col); l++) printf("_");
        printf("\n|");
        for (int j = 0; j < col; j++){
            printf("%d\t|",array4[i*j+j]);
        }
        printf("\n");
    }
    for( l = 0; l < col*(6+col); l++) printf("_");
     
    return 0;
}

void lne(){
    printf("\n");
    for (int i = 0; i < 80; i++) printf("-");
    printf("\n");
}

