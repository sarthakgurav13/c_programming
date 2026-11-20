#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkSmall
//          Input         : Character
//          Output        : BOOL (TRUE or FALSE)
//          Description   : It checks whether the given character is a small alphabet.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    printf("Enter the character\n");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small Character:\n");
    }
    else
    {
        printf("It is not a Small Character");
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
//      a           It is Small Character:
//      z           It is Small Character:
//      m           It is Small Character:
//      A           It is not a Small Character
//      5           It is not a Small Character
//      @           It is not a Small Character
//////////////////////////////////////////////////////////////////////////////////