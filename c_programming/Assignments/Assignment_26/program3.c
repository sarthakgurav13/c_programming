#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Display
//          Input         : Character
//          Output        : Displays characters from the given lowercase
//                          character down to 'a', or from the given uppercase
//                          character up to 'Z'.
//          Description   : It checks whether the given character is lowercase
//                          or uppercase. For lowercase characters, it displays
//                          characters in descending order. For uppercase
//                          characters, it displays characters in ascending order.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int i = 0;
    int j = 0;

    if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t",ch);
            ch--;
        }

    }
    else if(ch >='A' && ch <= 'Z')
    {
        for(j = ch; j<= 'Z'; j++)
        {
            printf("%c\t",ch);
            ch++;
        }

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
//      d           d    c    b    a
//      z           z    y    x    ...    a
//      A           A    B    C    ...    Z
//      X           X    Y    Z
//      m           m    l    k    ...    a
//      5           No output
//      @           No output
//////////////////////////////////////////////////////////////////////////////////