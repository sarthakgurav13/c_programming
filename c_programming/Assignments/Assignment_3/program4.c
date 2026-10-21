
#include <stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//      
//          Function Name : DisplayConvert
//          Input         : Character
//          Output        : Converted character
//          Description   : Converts lowercase to uppercase and vice versa
//          Date          : 21/10/2026
//          Author        : Sarthak Babalu Gurav
//
/////////////////////////////////////////////////////////////////////////////////
void DisplayConvert(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    printf("Converted character: %c\n", ch);
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue;

    printf("Enter one character: ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

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