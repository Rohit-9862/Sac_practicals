#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <alloc.h>

struct node{
    int data;
    struct node *next;
};

struct node* append(struct node*, int);
struct node* appstart(struct node*, int);
void display(struct node*);
struct node* del(struct node*, int);
int count(struct node*);
void lne();

void main(){
    int size, temp, res;
    system("cls");
    struct node *head = NULL;
    printf("Enter the No. of items in the list: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        printf("\nEnter the the %d item of the list: ", i);
        scanf("%d", &temp);
        head = append(head, temp);
    }
    system("cls");
    printf("\nThe list is:");
    display(head);
    printf("\nThe size of the list is: %d", count(head));
    printf("\nDo you want to delete some item? [0:NO/1:YES]");
    scanf("%d", &res);
    if (res == 1)
    {
        printf("\nEnter the item you want to delete: ");
        scanf("%d", &temp);
        head = del(head, temp);
        printf("\nThe new list is:\n");
        display(head);
    }
    
    getchar();
    getchar();
}

void display(struct node *head){
    struct node *curr = head;
    while (curr->next != NULL){
        printf("%d->", curr->data);
        curr = curr->next;
    }
    printf("%d->NULL", curr->data);
}

struct node* appstart(struct node *head, int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = head;
    return temp;
}

struct node* append(struct node *head, int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;
    if (head == NULL) return temp;
    struct node *curr = head;
    while (curr->next != NULL) curr = curr->next;
    curr-> next = temp;
    return head;
}

int count(struct node *head){
    int i = 1;
    struct node *curr = head;
    while (curr->next != NULL){
        i++;
        curr = curr->next;
    }
    return i;
}

struct node* del(struct node *head, int item){
    struct node *curr = head;
    struct node *prev = NULL;
    if (curr!= NULL&& curr->data == item)
    {
        head= curr->next;
        free(curr);
        return head;
    }
    
    while (curr->next != NULL && curr->data != item){
        prev = curr;
        curr = curr->next;
    }
    if (curr==NULL){
        return head;
    }
    prev->next = curr->next;
    free(curr);
    return head;
}
void lne(){
    printf("\n");
    for(int i = 0; i < 80; i++)printf("-");
    printf("\n");
}