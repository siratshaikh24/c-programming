#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Anything");
    scanf("%c",&ch);
    if(isupper(ch))
    printf("Capital Letter");
    else if(islower(ch))
    printf("small letter");
    else if(isdigit(ch))
    printf("Digit");
    else
    printf("Special Symbol");
    return 0;
   
}