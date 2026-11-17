#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CountWhite
//          Input         : Character pointer (string)
//          Output        : Integer (number of white spaces)
//          Description   : Count and return the number of space characters
//                          present in the given string.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("*%*'9[^\n]",arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces : %d\n",iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                  Output
//--------------------------------------------------------------------------------
//      Hello World            Number of white spaces : 1
//      C Programming Language Number of white spaces : 2
//      Sarthak                Number of white spaces : 0
//      A  B   C                Number of white spaces : 5
//--------------------------------------------------------------------------------