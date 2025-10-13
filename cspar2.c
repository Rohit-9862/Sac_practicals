#include<stdio.h>

struct employee{
	int menfear;
    int xp;
    int star;
};
int main()
{	int temp;
	struct employee e1;
    printf("Enter the detail of the emplayee (salary experience rating): ");
    scanf("%d %d %d", &e1.menfear, &e1.xp, &e1.star);
    if(e1.menfear >100000) temp = e1.menfear*0.03;
    else if(e1.menfear >=75000 && e1.menfear <=100000) temp = e1.menfear*0.02;
    else temp = e1.menfear*0.01;
    printf("\nNet salary is %d", e1.menfear-temp);
    
    return 0;
}