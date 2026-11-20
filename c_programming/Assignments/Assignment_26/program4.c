#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkSpecial
//          Input         : Character
//          Output        : BOOL (TRUE or FALSE)
//          Description   : It checks whether the given character is one of the
//                          specified special characters (!, @, #, $, %, &, *).
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '&' || ch == '*')
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not special character");
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
//      !           It is special Character
//      @           It is special Character
//      #           It is special Character
//      $           It is special Character
//      %           It is special Character
//      &           It is special Character
//      *           It is special Character
//      A           It is not special character
//      5           It is not special character
//      +           It is not special character
//////////////////////////////////////////////////////////////////////////////////