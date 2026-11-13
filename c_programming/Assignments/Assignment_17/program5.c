#include<stdlib.h>
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays an incremental number pattern
//          Description   : Displays numbers by adding the row and column
//                          positions, starting from 1 in the first row
//                          and incrementing the starting number for each row
//          Date          : 13/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;


    for(i=1;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
                printf("%d\t",i+j);

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
//      4                   4               1  2  3  4
//                                          2  3  4  5
//                                          3  4  5  6
//
//      5                   3               1  2  3
//                                          2  3  4
//                                          3  4  5
//                                          4  5  6
//
//      2                   5               1  2  3  4  5
//
//      1                   4               No output
//
//      0                   3               No output
//--------------------------------------------------------------------------------//