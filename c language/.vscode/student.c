#include <stdio.h>
int main()
{
    int roll;
    char name[100],sub1[100],sub2[100],sub3[100];
    float m1, m2, m3, total, avg;
    char grade;
    FILE *fp;
    
    fp = fopen("Result.txt", "w");
    
    printf("Enter a Student Details:");
    printf("\nRoll Number:");
    scanf("%d", &roll);
    printf("Name : ");
    scanf("%s", &name);
    printf("Subject 1 : ");
    scanf("%s",&sub1);
    printf("Subject 2 : ");
    scanf("%s", &sub2);
    printf("Subject 3 : ");
    scanf("%s", &sub3);
    printf("Marks of Subject 1 :");
    scanf("%f", &m1);
    printf("Marks of Subject 2 :");
    scanf("%f", &m2);
    printf("Marks of Subject 3 :");
    scanf("%f", &m3);
    total = m1 + m2 + m3;
    avg = total/3;
    if (avg <= 100 && avg >= 90)
        grade = 'o';
    else if (avg <= 90 && avg >= 80)
        grade = 'A';
    else if (avg <= 80 && avg >= 70)
        grade = 'B';
    else if (avg <= 70 && avg >= 60)
        grade = 'C';
    else if (avg <= 60 && avg >= 50)
        grade = 'D';
    else if (avg <= 50 && avg >= 35)
        grade = 'E';
    else
        grade = 'F';
    
    fprintf(fp, "\n---------------------Result-----------------");
    fprintf(fp, "\nRoll Number        : %d", roll);
    fprintf(fp, "\nName               : %s", name);
    fprintf(fp, "\nSubject 1          : %s", sub1);
    fprintf(fp, "\nMarks of Subject 1 : %f", m1);
    fprintf(fp, "\nSubject 2          : %s", sub2);
    fprintf(fp, "\nMarks of Subject 2 : %f", m2);
    fprintf(fp, "\nSubject 3          : %s", sub3);
    fprint(fp, "\nMarks of Subject 3  : %f", m3);
    fprintf(fp, "\nTotal              : %f", total);
    fprintf(fp, "\nAvg                : %f", avg);
    fprintf(fp, "\nGrade              : %c", grade);


return 0;
}

