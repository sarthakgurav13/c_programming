#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkAlpha
//          Input         : Character
//          Output        : BOOL (TRUE or FALSE)
//          Description   : Check whether the given character is an alphabet.
//                          Return TRUE if it is an uppercase or lowercase
//                          alphabet; otherwise, return FALSE.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
BOOL ChkAlpha(char ch)
{
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }
    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input          Output
//--------------------------------------------------------------------------------
//      A              It is Character
//      z              It is Character
//      5              It is not a Character
//      @              It is not a Character
//      space          It is not a Character
//--------------------------------------------------------------------------------