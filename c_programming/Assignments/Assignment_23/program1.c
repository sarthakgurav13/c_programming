#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : strlwrx
//          Input         : Character pointer (string)
//          Output        : Convert uppercase characters into lowercase
//          Description   : Convert all uppercase alphabetic characters in
//                          the given string into lowercase characters.
//                          Other characters remain unchanged.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("*%*[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                  Output
//--------------------------------------------------------------------------------
//      HELLO                  hello
//      Sarthak                sarthak
//      Hello123               hello123

//--------------------------------------------------------------------------------