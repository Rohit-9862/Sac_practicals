//Producr not complete

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>//uncomment this line of code?
//#include <alloc.h>//uncomment this line of code?

//#define clrscr() system("cls")//remove this line of code?


void lne();
int main(){
    int row, col, l;
    //clrscr();
    printf("\nEnter the row and col of the array ");
    scanf("%d %d", &row, &col);
    
    printf("\n\nEnter data for the  matrix\n");
    int *array1 = (int *)malloc((row*col)*sizeof(int));
    if (!array1){
        printf("Error while allocating memory for array");
        return 1;
    }

    for(int i = 0; i < (row); i++){
        for (int j = 0; j <col; j++){
            printf("\nEnter the %d %d item of the array: ", i, j);
            scanf("%d", &array1[i*j+j]);
        }
    }
    
    //system("cls");
    lne();
    printf("\t\tMATRIX PRINTINH");
    lne();
    printf("\n\nThe matrix is:\n");
    for(int i = 0; i < row; i++){
        for(l = 0; l < col*(6+col); l++) printf("_");
        printf("\n|");
        for (int j = 0; j < col; j++){
            printf("%d\t|",array1[i*j+j]);
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

