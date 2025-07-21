#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Anything");
    scanf("%c",&ch);
    if(ch >= 'A'&& ch<='Z')
    printf("Capital Letter");
    else if(ch>= 'a' && ch<='z')
    printf("small letter");
    else if(ch >='0'&& ch<='9')
    printf("Digit");
    else
    printf("Special Symbol");
    return 0;
}