#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Display
//          Input         : Character
//          Output        : Displays the given character in uppercase if it is
//                          a lowercase alphabet; otherwise, displays it unchanged.
//          Description   : It converts a lowercase alphabet to uppercase by
//                          subtracting 32 from its ASCII value.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch-32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Entre the character:\n");
    scanf("%c",&cValue);

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
//      a           A
//      z           Z
//      m           M
//      A           A
//      5           5
//      @           @
//////////////////////////////////////////////////////////////////////////////////