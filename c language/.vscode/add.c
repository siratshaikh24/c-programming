#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    float avg;
    printf("how many number you want in array");
    scanf("%d",&n);
    printf("\nenter %d element",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("average of array is %f",avg);
}