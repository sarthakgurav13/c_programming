#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Difference
//          Input         : Character pointer (string)
//          Output        : Integer (difference between Capital and Small)
//          Description   : It traverses the given string and checks for capital
//                          and small letters. It calculates the difference
//                          between the Capital and Small variables.
//                          Due to the current post-increment assignments,
//                          both variables remain zero, so the function returns 0.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int Capital = 0;
    int Small = 0;

    int iCnt = 0;
    int jCnt = 0;

    while( *str != '\0')
    {
        if(*str >= 'A' &&  *str <= 'Z')
        {
            Capital = iCnt++;
        }
        else if(*str >= 'a' &&  *str <= 'z')
        {
            Small = jCnt++;
        }
        str++;

    }

    return (Capital - Small);
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

    iRet = Difference(arr);

    if(iRet < 0)
    {
        iRet = -iRet;
    }
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
//      HELLO                   0
//      hello                   0
//      Hello                   0
//      Hello World             0
//      ABC123xyz               0
//      12345                   0
//      @#$                     0
//////////////////////////////////////////////////////////////////////////////////