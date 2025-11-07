#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct queue{
    int arr[MAX];
    int front, rear;
};

void initqueue(struct queue**);
void enqueue(struct queue*, int);
int dequeue(struct queue*);
int peekqueue(struct queue*);

void main(){
    struct queue *q1;
    initqueue(&q1);
    int item, res, choice;
    while (1)
    {
        printf("\nFUNDAMENTAL OPERATION ON QUEQE\n1. Add item to queue\n2. Remove item from queue\n3. Peek the top item from the queue\n4. EXIT\n");
        printf("\n\nEnter your choice here> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter he item you want to add> ");
            scanf("%d", &item);
            enqueue(q1, item);
            break;
        case 2:
            res = dequeue(q1);
            if(res) printf("\nItem on top is : %d", res);
            getchar();
            break;
        
        case 3:
            res = peekqueue(q1);
            if(res) printf("\nItem on top is : %d", res);
            getchar();
            break;
        case 4:
            printf("\nExiting..");
            exit(1);
            break;
        default:
            break;
        }
    getchar();
    system("cls");
    }
    
    
}

void initqueue(struct queue **queue){
    (*queue)->front = -1;
    (*queue)->rear = -1;
}

void enqueue(struct queue *queue, int item){
    if (queue->rear == MAX-1){
        printf("\nQueue is full\n");
        return;
    } 
    queue->rear++;
    queue->arr[queue->rear] = item;
    if(queue->front == 0){
        queue->front =0;
    }
}

int dequeue(struct queue *queue){
    int data;
    if(queue->front == -1){
        printf("\nThr queue is empty\n");
        return;
    }
    data = queue->arr[queue->front];
    queue->arr[queue->front] = 0;
    if(queue->front == queue->rear){
        queue->front = queue->rear = -1;
    }
    else{
        queue->front++;
    }
    return data;
}

int peekqueue(struct queue *queue){
    int data;
    if(queue->front == -1){
        printf("\nThr queue is empty\n");
        return;
    }
    data = queue->arr[queue->front];
    return data;
}