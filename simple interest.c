#include<stdio.h>
int main()
{
    int p,t,r;
    float res;
    printf("Principle is:");
    scanf("%d",&p);
    printf("Interest is:");
    scanf("%d",&r);
    printf("Time is:");
    scanf("%d",&t);
    res=p*t*r/100;
    printf("The simple interest is: %lf",res);
}