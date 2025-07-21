#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    i=0
    while(i<n)
    {
        if(i%2==0)
        printf("%d\t",i);
        i++;
    }
}