#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

#define MAX 10

struct queue
{
    int arr[MAX];
    int front, rear;
};

void initq(struct queue*);
void addq(struct queue*, int);
int delq(struct queue*);

void main(){
    struct queue *head;
    int n;
    initq(head);
    addq(head, 1);
    addq(head, 3);
    addq(head, 4);
    addq(head, 5);
    n = delq(head);
    if (n!= NULL)printf("\nItem deleted %d", n);
    n = delq(head);
    if (n!= NULL)printf("\nItem deleted %d", n);
    n = delq(head);
    if (n!= NULL)printf("\nItem deleted %d", n);
    n = delq(head);
    if (n!= NULL)printf("\nItem deleted %d", n);
}

void initq(struct queue *queue){
    queue->front= -1;
    queue->rear = -1;
}
void addq(struct queue* queue, int data){
    if(queue->rear == MAX-1){
        printf("\nError: Memory overflow");
        return;
    }
    queue->rear++;
    queue->arr[queue->rear] = data;
    if (queue->front == -1)queue->front = 0;   
}

int delq(struct queue *queue){
    int data;
    if (queue->front == -1)
    {
        printf("Queue is Empty");
        return;
    }
    data = queue->arr[queue->front];
    queue->arr[queue->front] = 0;
    if (queue->front == queue->rear)queue->front = queue->rear = -1;
    else queue ->front++;
    return data;    
}