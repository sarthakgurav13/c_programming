#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Integer number of elements
//          Output        : Display #, numbers and * symbols
//          Description   : Display a # symbol, followed by numbers starting
//                          from 1 in ascending order, with a * symbol after
//                          each number.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int i = 0;
    int iCnt =1;

    for(i = 0; i < iNo; i++)
    {
        printf("#\t%d\t*\t",iCnt++);

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
//      5              # 1 * # 2 * # 3 * # 4 * # 5 *
//      4              # 1 * # 2 * # 3 * # 4 *
//      3              # 1 * # 2 * # 3 *
//      1              # 1 *
//--------------------------------------------------------------------------------