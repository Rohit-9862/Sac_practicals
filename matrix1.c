#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <alloc.h>

int M_SIZE;

void initmat(int*);
void matadd(int*, int*, int*);
void matsub(int*, int*, int*);
void matmul(int*, int*, int*);
void transpose(int*, int*);
void display(int*);
void lne();

void main(){
    system("cls");
    printf("Enter the size of the matrix (we assume square matrix for all operation):");
    scanf("%d", &M_SIZE);
    int *M1 = (int *)malloc(M_SIZE*sizeof(int));
    int *M2 = (int *)malloc(M_SIZE*sizeof(int));
    int *M3 = (int *)malloc(M_SIZE*sizeof(int));
    int *M4 = (int *)malloc(M_SIZE*sizeof(int));
    int *M5 = (int *)malloc(M_SIZE*sizeof(int));
    printf("\nInit matrix 1\n");
    initmat(M1);
    printf("\nInit matrix 2\n");
    initmat(M2);
    system("cls");
    lne();
    printf("\t\t\tBASIC MATRIX OPERATION");
    lne();
    printf("\nMATRIX 1\n");
    display(M1);
    printf("\nMATRIX 2\n");
    display(M2);
    printf("\nSUM OF MATRIX 1 AND MATRIX 2:\n");
    matadd(M1, M2, M3);
    display(M3);
    printf("\nMULTIPLICATION OF MATRIX 1 AND MATRIX 2:\n");
    matmul(M1, M2, M4);
    display(M4);
    printf("\nTRANSPOSE OF MATRIX 1\n");
    transpose(M1, M5);
    display(M5);
    //getch();

}

void initmat(int *M1){
    for (int i = 0; i < M_SIZE; i++)
    {
        for (int j = 0; j < M_SIZE; j++)
        {
            printf("\nEntre the %d %d value:", i, j);
            scanf("%d", &M1[M_SIZE*i+j]);
        }   
    }
}

void matadd(int *M1, int *M2, int *M3){
    for (int i = 0; i < M_SIZE; i++)
    {
        for (int j = 0; j < M_SIZE; j++)
        {
            M3[M_SIZE*i +j] = M1[M_SIZE*i+j]+M2[M_SIZE*i+j];
        }
    }
}

void matsub(int *M1, int *M2, int *M3){
    for (int i = 0; i < M_SIZE; i++)
    {
        for (int j = 0; j < M_SIZE; j++)
        {
            M3[M_SIZE*i +j] = M1[M_SIZE*i+j]-M2[M_SIZE*i+j];
        }
    }
}

void matmul(int *M1, int *M2, int *M3){
    for (int i = 0; i < M_SIZE; i++)
    {
        for (int j = 0; j < M_SIZE; j++)
        {
            M3[M_SIZE*i +j] = 0;//M1[M_SIZE*i+j]+M2[M_SIZE*i+j];
            for (int k = 0; k < M_SIZE; k++)
            {
                M3[M_SIZE*i +j] += M1[M_SIZE*i+k]+M2[M_SIZE*j+k];
            }
        }
    }
}

void transpose(int *M1, int *M2){
    for (int i = 0; i < M_SIZE; i++)
    {
        for (int j = 0; j < M_SIZE; j++)
        {
            M2[M_SIZE*i +j] = M1[M_SIZE*j+i];
        }   
    }
}

void display(int *M1){
    for (int i = 0; i < M_SIZE; i++)
    {
        for (int j = 0; j < M_SIZE; j++)
        {
            printf("%d\t", M1[M_SIZE*i +j]);
        }
        printf("\n");
    }
}

void lne(){
    printf("\n");
    for(int i = 0; i < 80; i++)printf("-");
    printf("\n");
}