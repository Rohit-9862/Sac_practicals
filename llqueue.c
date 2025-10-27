#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
    int data;
    struct node *next;
};

struct queue{
    struct node *front;
    struct node *rear;
};

void initq(struct queue*);
void addq(struct queue*, int);
int delq(struct queue*);
void delqueue(struct queue*);

void main(){
    struct queue q;
    initq(&q);
    int choice, data;

    while(1){
        printf("\n=== Linked List Queue Operations ===\n");
        printf("1. Add element to queue\n");
        printf("2. Remove element from queue\n");
        printf("3. Delete entire queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter data to add: ");
                scanf("%d", &data);
                addq(&q, data);
                printf("Data added successfully!\n");
                break;
            
            case 2:
                data = delq(&q);
                if(data != -1){
                    printf("Deleted element: %d\n", data);
                }
                break;
            
            case 3:
                delqueue(&q);
                printf("Queue deleted successfully!\n");
                break;
            
            case 4:
                delqueue(&q);  // Clean up before exit
                printf("Exiting program...\n");
                exit(0);
            
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

void initq(struct queue *head){
    head->front = NULL;
    head->rear = NULL;
}

void addq(struct queue *head, int data){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    temp->data = data;
    temp->next = NULL;

    /* If queue is empty, new node is both front and rear */
    if(head->rear == NULL){
        head->front = temp;
        head->rear = temp;
    } else {
        /* Attach at the end and update rear */
        head->rear->next = temp;
        head->rear = temp;
    }
}

int delq(struct queue *head){
    if(head->front == NULL){
        printf("Queue is empty\n");
        return -1; /* sentinel value indicating empty queue */
    }

    struct node *temp = head->front;
    int value = temp->data;

    head->front = temp->next;
    if(head->front == NULL){
        /* If the queue became empty, update rear too */
        head->rear = NULL;
    }

    free(temp);
    return value;
}

void delqueue(struct queue *head){
    struct node *current = head->front;
    while(current != NULL){
        struct node *next = current->next;
        free(current);
        current = next;
    }
    head->front = NULL;
    head->rear = NULL;
}