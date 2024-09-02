#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("***Program to find sum of individual digits of a given positive integer***\n");
    printf("Name: Arsh Ahmad, Class: MCA_1A, Roll:15\n");
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum of individual digits of the positive integer is %d\n",sum);
}