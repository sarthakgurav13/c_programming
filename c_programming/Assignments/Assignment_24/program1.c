#include<stdio.h>
#include<stdlib.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character is Found \n");
    }
    else
    {
        printf("Character is not Found \n");
    }

    return EXIT_SUCCESS;

}