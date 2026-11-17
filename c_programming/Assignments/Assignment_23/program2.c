#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : struprx
//          Input         : Character pointer (string)
//          Output        : Convert lowercase characters into uppercase
//          Description   : Convert all lowercase alphabetic characters in
//                          the given string into uppercase characters.
//                          Other characters remain unchanged.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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

    struprx(arr);

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
//      Sarthak                SARTHAK
//      Hello123               HELLO123
//      
//--------------------------------------------------------------------------------