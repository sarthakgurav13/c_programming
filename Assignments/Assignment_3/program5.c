#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//      
//          Function Name : chkVowel
//          Input         : Character
//          Output        : Converted character
//          Description   : Converts lowercase to uppercase and vice versa
//          Date          : 21/10/2026
//          Author        : Sarthak Babalu Gurav
//
/////////////////////////////////////////////////////////////////////////////////
typedef int BOOL;

# define TRUE 1
# define FALSE 0

BOOL chkVowel(char ch)
{
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Charater\n");

    scanf("%c",&cValue);

    bRet = chkVowel(cValue);

    if(bRet == TRUE )
    {
        printf(" Its a Vowel \n");
    }
    else
    {
        printf(" Its not Vowel \n");
    }
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input           Output
//--------------------------------------------------------------------------------
//          a           A
//          A           a
//////////////////////////////////////////////////////////////////////////////////