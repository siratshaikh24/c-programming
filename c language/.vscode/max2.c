#include<stdio.h>
int main()
{
   int n;
   printf("Enter three Numbers");
   scanf("%d%d%d",&num1,&num2,&num3);
   if(num1>=num2 && num1 >= num3)
   {
    max=num1;
   }
   else if(num2 >=num1 && num2 >=num3) {
    max =num2;
   }
   else{
    max=num3;
   }
   printf("The maximum number is:%d\n,max");
   return 0;
}