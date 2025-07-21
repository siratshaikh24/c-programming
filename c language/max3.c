#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter 3 Numbers");
   scanf("%d%d%d",&a,&b,&c);
   if(a>=b && a>c)
   Printf("max is %d",a);
   else if(b>c && b>a)
   printf("max is %d",b);
   else
   Printf("max is %d",c);
   return 0;
}