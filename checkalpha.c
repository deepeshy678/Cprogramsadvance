#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character to check:");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("\nThis is an alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("\n This is a digit");
    }
    else
    {
        printf("\n This is a special character");
    }
}