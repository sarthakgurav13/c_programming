#include<stdlib.h>
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays a cyclic number pattern
//          Description   : Displays numbers from 1 to 9 repeatedly in
//                          row-wise order for the specified number of
//                          rows and columns
//          Date          : 12/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;


    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d\t",iCnt);

            iCnt++;

            if(iCnt > 9)
            {
                iCnt = 1;
            }           
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
//      3                   4               1  2  3  4
//                                          5  6  7  8
//                                          9  1  2  3
//
//      2                   5               1  2  3  4  5
//                                          6  7  8  9  1
//
//      1                   9               1  2  3  4  5  6  7  8  9
//
//      0                   4               No output
//--------------------------------------------------------------------------------//