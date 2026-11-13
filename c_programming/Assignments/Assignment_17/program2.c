#include<stdlib.h>
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays an even and odd number pattern
//          Description   : Displays consecutive even numbers in odd rows
//                          and consecutive odd numbers in even rows,
//                          starting from 2 and 1 respectively
//          Date          : 12/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 2;


    for(i=0;i<iRow;i++)
    {
        if(i % 2 == 0)
        {
            iCnt = 2;
        }
        else
        {
            iCnt = 1;
        }

        for(j=0;j<iCol;j++)
        {
            printf("%d\t",iCnt);
            iCnt = iCnt + 2;
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Input 2         Output
//--------------------------------------------------------------------------------
//      3                   4               2  4  6  8
//                                          1  3  5  7
//                                          2  4  6  8
//
//      4                   3               2  4  6
//                                          1  3  5
//                                          2  4  6
//                                          1  3  5
//
//      2                   5               2  4  6  8  10
//                                          1  3  5  7  9
//
//      0                   4               No output
//--------------------------------------------------------------------------------//