#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : DisplayASCII
//          Input         : No Input
//          Output        : Displays decimal, hexadecimal, octal and character
//                          representations of values from 0 to 255.
//          Description   : It displays the ASCII table by iterating through
//                          integer values from 0 to 255.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    printf("Decimal\tHexadecimal\toctal\tSymbol");
    printf("\n");

    for(int i =0; i<=255; i++)
    {
       printf("%d\t\t\t%X\t\t\t%o\t\t\t%c",i,i,i,i);
       printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input       Output
//--------------------------------------------------------------------------------
//      No Input    Displays ASCII values from 0 to 255 in decimal, hexadecimal,
//                  octal and character formats.
//--------------------------------------------------------------------------------
//      Sample Output
//      Decimal     Hexadecimal     octal     Symbol
//      0           0               0         (Null character)
//      1           1               1         (Start of Heading)
//      2           2               2         (Start of Text)
//      ...         ...             ...       ...
//      65          41              101       A
//      66          42              102       B
//      ...         ...             ...       ...
//      255         FF              377       (Implementation-dependent character)
//
//////////////////////////////////////////////////////////////////////////////////