#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkDigit
//          Input         : Character
//          Output        : BOOL (TRUE or FALSE)
//          Description   : It checks whether the given character is a digit.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;
    }
    return FALSE;
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input       Output
//--------------------------------------------------------------------------------
//      0           It is Digit
//      9           It is Digit
//      5           It is Digit
//      A           It is not a Digit
//      @           It is not a Digit
//////////////////////////////////////////////////////////////////////////////////