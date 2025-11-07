#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct stack{
    int arr[MAX];
    int top;
};

void initstack(struct stack*);
void push(struct stack*, int);
int pop(struct stack*);
int peek(struct stack*);

int main(){
    struct stack s1;
    int push_i, pop_i, peek_i, choice; 
    system("cls");
    printf("\nInitilizing the stack\n");
    initstack(&s1);
    while (1){
        printf("\n1. PUSH\n2. POP\n3. PEEK\n4. EXIT\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the itemp to push: ");
            scanf("%d", &push_i);
            push(&s1, push_i);
            printf("\nPush Sucessfull\n");
            break;
        
        case 2:
            pop_i = pop(&s1);
            printf("\nPOP ITEM IS : %d\n", pop_i);
            getchar();
            break;
        case 3:
            peek_i = pop(&s1);
            printf("\nITEM ON TOP IS : %d\n", peek_i);
            getchar();
            break;
        case 4:
            printf("\nEXITING\n");
            exit(1);
        default:
            break;
        }
        getchar();
        system("cls");
    }
    getchar();

}

void initstack(struct stack *S){
    S->top = -1;
}

void push(struct stack *S, int item){
    if (S->top==MAX-1){
        printf("\nStack is full\n");
        return;
    }
    S->top++;
    S->arr[S->top] = item;
}

int pop(struct stack *S){
    int temp;
    if (S->top == -1)
    {
        printf("\nStack is empty\n");
        return;
    }
    temp = S->arr[S->top];
    S->arr[S->top] = 0;
    S->top--;
    return temp;
}

int peek(struct stack *S){
    int temp;
    if (S->top == -1)
    {
        printf("\nStack is empty\n");
        return;
    }
    temp = S->arr[S->top];
    return temp;
}