#include<stdio.h>
int main()
{
    int id, bs;
    float da, hra, tax_rate,tax_amount, total_salary;
    char name[100];
    FILE *fp;
    fp = fopen("Employee Details1.txt","w");

    printf("Employee ID: ");
    scanf("%d", &id);

     printf("Enter Name: ");
    scanf("%s", name);

     printf("Enter Basic Salary: ");
    scanf("%d", &bs);

     printf("Enter DA (%%): ");
    scanf("%f", &da);

     printf("Enter HRA (%%): ");
    scanf("%f", &hra);
   total_salary = bs + (bs * (da + hra) / 100);

   if (bs >= 90000 && bs <= 100000)
   tax_rate = 0.20;
   else if (bs >= 80000 && bs < 90000)
   tax_rate = 0.15;
   else if(bs >= 70000 && bs < 80000)
   tax_rate = 0.10;
   else if(bs >= 60000 && bs < 70000)
    tax_rate = 0.05;

    else 
       tax_rate = 0.0;

       tax_amount=total_salary*tax_rate;
       fprintf(fp,"\n-------------------------Employee Details---------------------\ns");     
       fprintf(fp,"Employee ID            : %d\n",id);
       fprintf(fp,"Employee Name          : %s\n",name);
       fprintf(fp,"Employee Basic Salary  : %d\n",bs);
       fprintf(fp,"Employee DA            : %.2f%%\n",da);
       fprintf(fp,"Employee HRA           : %.2f%%\n",hra);
       fprintf(fp,"Total Salary           : %.2f%%\n",total_salary);
       fprintf(fp,"Tax Rate               : %.2f%%\n", tax_rate * 100);
       fprintf(fp,"Tax Amount             : %.2f\n", tax_amount);


       return 0;
}