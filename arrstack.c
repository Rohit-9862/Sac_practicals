#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

#define MAX 10

struct stack
{
    int arr[MAX];
    int top;
};

void initstack(struct stack*);
void push(struct stack*, int);
int pop(struct stack*);
int peek(struct stack*);

void main(){
    struct stack s1;
    int n;
    initstack(&s1);
    push(&s1, 1);
    push(&s1, 2);
    push(&s1, 3);
    push(&s1, 4);

    n = pop(&s1);
    if (n != NULL)
    {
        printf("\nItem pop %d", n);
    }
    n = pop(&s1);
    if (n != NULL)
    {
        printf("\nItem pop %d", n);
    }
    n = pop(&s1);
    if (n != NULL)
    {
        printf("\nItem pop %d", n);
    }
    n = peek(&s1);
    if (n != NULL)
    {
        printf("\nItem On top %d", n);
    }

}

void initstack(struct stack *stack){
    stack->top = -1;
}

void push(struct stack *stack, int data){
    if (stack->top == MAX-1)
    {
        printf("\nERROR: Memory OverFlow\n");
    }
    else{
        stack->top++;
        stack->arr[stack->top] = data;
    }
}

int pop(struct stack *stack){
    int data;
    if (stack->top == -1)
    {
        printf("Error: Memory UnderFlow");
        return NULL;
    }
    data = stack->arr[stack->top];
    stack->top--;
    return data; 
}

int peek(struct stack *stack){
    int data;
    if (stack->top == -1)
    {
        printf("Error: Memory UnderFlow");
        return NULL;
    }
    data = stack->arr[stack->top];
    return data; 
}