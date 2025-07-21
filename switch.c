#include<stdio.h>
int main()
{
    int a, b, ch;
    printf("\n 1.Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n Enter a choice");
    scanf("%d", &ch);
    printf("Enter 2  Numbers");
    scanf("%d", &a, &b);
    switch(ch)
    {
        case 1: printf("Addition is %d ", (a+b));
        break;
        case 2 :printf("Substraction is %d", (a-b));
        break;
        case 3 :printf("Multiplication is %d", (a*b));
        break ;
        case 4 :printf("Division is %d", (a/b));
        break;
        default: printf("invalid choice");
    }
        return 0;

    
}
