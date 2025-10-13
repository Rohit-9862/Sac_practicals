//recording and saving student details using struct;

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <alloc.h>

struct student
{
    char *name;
    int age;
    int wt;
    int ht;
};

void lne();

void main(){
    int i;
    struct student bsc[41]; 
    for (i = 0; i < 41; i++){
        printf("Enter the details of the sudent (name age weight height): ");
        scanf("%c %d %d %d", bsc[i].name, &bsc[i].age, &bsc[i].ht, &bsc[i].wt);
    }

    for (i = 0; i < 41; i++){
        printf("\nThe details of the studenet %d: ", i);
        printf("\nname: %c\nage: %d \nheight: %d \nweight: %d", bsc[i].name, bsc[i].age, bsc[i].ht, bsc[i].wt);
    }
}

void lne(){
    printf("\n");
    for (int i = 0; i < 80; i++) printf("-");
    printf("\n");
}

