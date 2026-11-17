#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : DisplayDigits
//          Input         : Character pointer (string)
//          Output        : Display numeric digits from the given string
//          Description   : Traverse the string and display only digit
//                          characters (0 to 9).
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c ",*str);
        }
        str++;
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("*%*[^'\n']s",arr);

    DisplayDigits(arr);


    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                  Output
//--------------------------------------------------------------------------------
//      abc123                 1 2 3
//      A1B2C3                 1 2 3
//      Hello                  No digits found (only a newline is displayed)
//      12345                  1 2 3 4 5
//--------------------------------------------------------------------------------