#include<stdio.h>

int main()
{
    int n, i=1, j=1,sum=0, t;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    sum += 1;
    printf("\n%d\t", j);
    for(int k= 0;k<n;k++){
    printf("%d\t", i);
    sum += i;
    t = i+ j;
    j = i;
    i = t;
    
    
    }
    printf("\nSum = %d", sum);
    return 0;
}