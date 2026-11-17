#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Integer number of rows and columns
//          Output        : Display a rectangular number pattern
//          Description   : Display column numbers starting from 1 in each
//                          row for the specified number of rows and columns.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;


    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
         printf("%d\t",j+1);
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1     Input 2     Output
//--------------------------------------------------------------------------------
//      4           5           1 2 3 4 5
//                              1 2 3 4 5
//                              1 2 3 4 5
//                              1 2 3 4 5
//--------------------------------------------------------------------------------
//      3           4           1 2 3 4
//                              1 2 3 4
//                              1 2 3 4
//--------------------------------------------------------------------------------
//      2           3           1 2 3
//                              1 2 3
//--------------------------------------------------------------------------------
//      1           5           1 2 3 4 5
//--------------------------------------------------------------------------------