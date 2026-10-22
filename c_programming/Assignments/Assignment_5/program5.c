#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CheckCharacterType        
//          Input         : Character 
//          Output        : String
//          Description   : Check the type of the character
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CheckCharacterType(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c is Uppercase\n", ch);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c is Lowercase\n", ch);
    }
    else if((ch >= '0') && (ch <= '9'))
    {
        printf("%c is Digit\n", ch);
    }
    else
    {
        printf("%c is Special Character\n", ch);
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

    printf("Enter the Character  : \n");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested Test Cases
//--------------------------------------------------------------------------------
//      Input           Output
//--------------------------------------------------------------------------------
//      A               A is Uppercase
//      Z               Z is Uppercase
//      a               a is Lowercase
//      z               z is Lowercase
//      5               5 is Digit
//      0               0 is Digit
//      @               @ is Special Character
//      #               # is Special Character
//      *               * is Special Character
//      space           Special Character (with this logic)
//
/////////////////////////////////////////////////////////////////////////////////
