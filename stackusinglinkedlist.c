#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void push(struct node**, int);
int pop(struct node**);
int peek(struct node**);
void del(struct node*);

void main(){
    struct node *s1;
    int push_i, pop_i, peek_i, choice; 
    system("cls");
    printf("\nInitilizing the stack\n");
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
            del(s1);
            exit(1);
        default:
            break;
        }
        getchar();
        system("cls");
    }
    getchar();
}

void push(struct node **stack, int item){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    if (*stack== NULL){
        *stack = temp;
    }
    temp ->next = *stack;
    *stack = temp;
}

int pop(struct node **stack){
    struct node *temp = *stack;
    int item;
    if ((*stack) == NULL){
        printf("\nSTACK IS EMPTY\n");
        return NULL;
    }
    item = (*stack)->data;
    *stack = temp->next;
    free(temp);
    return item;
}

int peek(struct node **stack){
    struct node *temp = *stack;
    int item;
    if ((*stack) == NULL){
        printf("\nSTACK IS EMPTY\n");
        return NULL;
    }
    item = (*stack)->data;
    return item;
}

void del(struct node *stack){
    struct node* temp;
    while (stack->next != NULL)
    {
        temp = stack->next;
        free(stack);
        stack = temp;
    }
    free(temp);
    free(stack);
}