#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CountSmall
//          Input         : Character pointer (string)
//          Output        : Integer (count of small letters)
//          Description   : It counts the number of lowercase alphabetic
//                          characters present in the given string.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    while( *str != '\0')
    {
        if(*str >= 'a' &&  *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;

}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Entre  string:\n");
    scanf("%[^\n]s",arr);

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                   Output
//--------------------------------------------------------------------------------
//      hello                   5
//      Hello World             8
//      ABC123xyz               3
//      OpenAI                  3
//      PROGRAMMING             0
//      a B c                   2
//////////////////////////////////////////////////////////////////////////////////