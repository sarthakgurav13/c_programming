#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Display
//          Input         : Character
//          Output        : Displays the decimal, octal and hexadecimal
//                          representations of the given character.
//          Description   : It accepts a character and displays its ASCII
//                          value in decimal, octal and hexadecimal formats.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal: %d\n",ch);
    printf("Octal: %o\n",ch);
    printf("Hexadecimal: %x\n",ch);
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input       Output
//--------------------------------------------------------------------------------
//      A           Decimal: 65
//                  Octal: 101
//                  Hexadecimal: 41
//--------------------------------------------------------------------------------
//      Input       Output
//--------------------------------------------------------------------------------
//      a           Decimal: 97
//                  Octal: 141
//                  Hexadecimal: 61
//--------------------------------------------------------------------------------
//      Input       Output
//--------------------------------------------------------------------------------
//      0           Decimal: 48
//                  Octal: 60
//                  Hexadecimal: 30
//--------------------------------------------------------------------------------
//      Input       Output
//--------------------------------------------------------------------------------
//      @           Decimal: 64
//                  Octal: 100
//                  Hexadecimal: 40
//////////////////////////////////////////////////////////////////////////////////