#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Integer number of elements
//          Output        : Display descending numbers with # symbols
//          Description   : Display numbers from the specified count down to
//                          1, with a # symbol after each number.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int i = 0;
    int iCnt =iNo;

    for(i = 0; i < iNo; i++)
    {
        printf("%d\t#\t",iCnt--);

    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;


    printf("Enter Number of Element : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input          Output
//--------------------------------------------------------------------------------
//      5              5 # 4 # 3 # 2 # 1 #
//      4              4 # 3 # 2 # 1 #
//      3              3 # 2 # 1 #
//      1              1 #
//--------------------------------------------------------------------------------