#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <alloc.h>

struct node{
    int data;
    struct node *next;
};

void del(struct node*);

struct node* push(struct node*, int);
int pop(struct node**);
int peek(struct node*);

void lne();

void main(){
    struct node *head = NULL;
    int n;
    head = push(head, 1);
    head = push(head, 2);
    head = push(head, 3);
    head = push(head, 4);
    head = push(head, 5);
    n = pop(&head);
    if (n!= NULL) printf("\nItem pop %d", n);
    n = pop(&head);
    if (n!= NULL) printf("\nItem pop %d", n);
    n = pop(&head);
    if (n!= NULL) printf("\nItem pop %d", n);
    n = pop(&head);
    if (n!= NULL) printf("\nItem pop %d", n);
    n = peek(head);
    if (n!= NULL) printf("\nItem on top %d", n);
    del(head);
}



struct node* push(struct node *head, int data){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    if (head == NULL) return temp;
    return temp;
}

int pop(struct node **head){
    struct node *temp;
    int data;
    if (*head == NULL) return NULL;
    temp = *head;
    data = temp->data;
    *head = (*head)->next;
    return data;
}

int peek(struct node *head){
    int data;
    if (head == NULL) return NULL;
    data = head->data;
    return data;
}

void del(struct node *head){
    struct node *curr = head;
    struct node *temp;
    if (head == NULL)
    {
        return;
    }
    
    while (curr!= NULL)
    {
        temp = curr;
        curr = curr->next;
        free(temp);
    }
}

void lne(){
    printf("\n");
    for(int i = 0; i < 80; i++)printf("-");
    printf("\n");
}