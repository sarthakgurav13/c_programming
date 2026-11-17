#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Integer number of rows and columns
//          Output        : Display a descending number pattern
//          Description   : Display numbers from the specified column count
//                          down to 1 repeatedly across all rows and columns.
//                          Reset the counter to the column count after it
//                          reaches zero.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = iCol;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
         printf("%d\t",iCnt);
         iCnt--;

         if(iCnt<=0)
         {
            iCnt=iCol;
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
//      4           5           5 4 3 2 1
//                              5 4 3 2 1
//                              5 4 3 2 1
//                              5 4 3 2 1
//--------------------------------------------------------------------------------
//      3           4           4 3 2 1
//                              4 3 2 1
//                              4 3 2 1
//--------------------------------------------------------------------------------
//      2           3           3 2 1
//                              3 2 1
//--------------------------------------------------------------------------------
//      2           4           4 3 2 1
//                              4 3 2 1
//--------------------------------------------------------------------------------