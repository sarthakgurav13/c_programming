#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : LastChar
//          Input         : Character pointer (string) and a character
//          Output        : Integer (index of last occurrence)
//          Description   : Search for the specified character in the given
//                          string and return the index of its last occurrence.
//                          Return -1 if the character is not found.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
int  LastChar(char *str, char ch)
{
    int index = 0;
    int lastindex = -1;

    while(*str != '\0')
    {
       if(*str == ch)
       {
        lastindex = index;
       }
       str++;
       index++;
    }
    return lastindex;
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

    iRet = LastChar(arr, cValue);

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
//      banana                 a               Character location is 5
//      programming            m               Character location is 7
//      Hello World            l               Character location is 9
//      Sarthak                 z               Character location is -1
//--------------------------------------------------------------------------------