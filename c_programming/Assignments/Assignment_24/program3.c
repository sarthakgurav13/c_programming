#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FirstChar
//          Input         : Character pointer (string) and a character
//          Output        : Integer (index of first occurrence)
//          Description   : Search for the specified character in the given
//                          string and return its first occurrence index.
//                          Return -1 if the character is not found.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
int FirstChar(char *str, char ch)
{
    int index = 0;

    while(*str != '\0')
    {
       if(*str == ch)
       {
        return index;
       }
       str++;
       index++;
    }
    return -1;
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    char cValue;

    int iRet =  0;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    printf("Enter the character:");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d",iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                  Character       Output
//--------------------------------------------------------------------------------
//      banana                 a               Character location is 1
//      programming            m               Character location is 6
//      Hello World            l               Character location is 2
//      Sarthak                 z               Character location is -1
//--------------------------------------------------------------------------------