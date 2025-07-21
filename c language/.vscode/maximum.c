#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 number");
   scanf("%d%d%d",&a,&b,&c);
   Printf("max is %2f",fmax(a,fmax(b,c)));
   return 0;
}