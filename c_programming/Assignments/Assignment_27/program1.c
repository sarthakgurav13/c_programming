#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CountCapital
//          Input         : Character pointer (string)
//          Output        : Integer (count of capital letters)
//          Description   : It counts the number of capital alphabetic characters
//                          present in the given string.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    while( *str != '\0')
    {
        if(*str >= 'A' &&  *str <= 'Z')
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

    iRet = CountCapital(arr);

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
//      HELLO                   5
//      Hello World             2
//      ABC123xyz               3
//      OpenAI                  3
//      programming             0
//      A B C                   3
//////////////////////////////////////////////////////////////////////////////////