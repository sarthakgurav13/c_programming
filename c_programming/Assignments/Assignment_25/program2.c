#include<stdio.h>
#include<stdlib.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkCapital
//          Input         : Character
//          Output        : BOOL (TRUE or FALSE)
//          Description   : It checks whether the given character is a capital alphabet.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
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
//      A           It is Capital Character
//      Z           It is Capital Character
//      a           It is not a Capital Character
//      5           It is not a Capital Character
//      @           It is not a Capital Character
//////////////////////////////////////////////////////////////////////////////////