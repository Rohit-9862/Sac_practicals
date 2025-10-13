//Time formate using struct;

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <alloc.h>

struct time
{
    int sec;
    int min;
    int hr;
};

void lne();

void main(){
    struct time nowtime; 
    printf("\nEnter the time: ");
    scanf("%d %d %d", &nowtime.sec, &nowtime.min, &nowtime.hr);
    printf("\nCurrent time is %d:%d:%d",nowtime.hr,  nowtime.min, nowtime.sec);
}

void lne(){
    printf("\n");
    for (int i = 0; i < 80; i++) printf("-");
    printf("\n");
}

