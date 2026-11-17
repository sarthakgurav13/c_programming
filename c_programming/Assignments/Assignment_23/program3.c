#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : strtogglex
//          Input         : Character pointer (string)
//          Output        : Toggle the case of alphabetic characters
//          Description   : Convert lowercase characters into uppercase and
//                          uppercase characters into lowercase.
//                          Other characters remain unchanged.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
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

    strtogglex(arr);

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
//      hello                  HELLO
//      HELLO                  hello
//      Hello123               hELLO123
//      HeLLo WoRLD             hEllO wOrld
//--------------------------------------------------------------------------------