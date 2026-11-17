#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Integer number of rows and columns
//          Output        : Display a number pattern
//          Description   : Display column numbers on the first row, first
//                          column, last row, last column and main diagonal.
//                          Leave blank spaces in the remaining positions.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iEndCol = (iCol - 1);
    int iEndRow = (iRow - 1);

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {

            if((j<1)||(i<1)||(j==iEndCol)||(i==iEndRow)||(j == i))
            {
                printf("%d\t",j+1);
            }
            else
            {
                printf(" \t");
            }
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
//      5           5           1 2 3 4 5
//                              1 2     5
//                              1   3   5
//                              1     4 5
//                              1 2 3 4 5
//--------------------------------------------------------------------------------
//      4           6           1 2 3 4 5 6
//                              1 2       6
//                              1   3     6
//                              1 2 3 4 5 6
//--------------------------------------------------------------------------------
//      3           4           1 2 3 4
//                              1 2   4
//                              1 2 3 4
//--------------------------------------------------------------------------------
//      1           5           1 2 3 4 5
//--------------------------------------------------------------------------------