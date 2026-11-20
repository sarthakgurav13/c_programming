#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CuntChar
//          Input         : Character pointer (string) and a character
//          Output        : Integer (frequency of the character)
//          Description   : Count and return the number of occurrences of
//                          the specified character in the given string.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
int CuntChar(char *str, char ch)
{
    int icount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {

          icount++;
        }
        str++;
    }
 return icount;
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    char cValue;

    int iRet =  0;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    printf("Enter the character:");
    scanf(" %c", &cValue);

    iRet = CuntChar(arr, cValue);


    printf("Character frequency is %d",iRet);


    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                  Character       Output
//--------------------------------------------------------------------------------
//      banana                 a               Character frequency is 3
//      programming            m               Character frequency is 2
//      Hello World            l               Character frequency is 3
//      Sarthak                 z               Character frequency is 0
//--------------------------------------------------------------------------------