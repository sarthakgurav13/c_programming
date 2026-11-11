#include<stdlib.h>
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays a number pattern
//          Description   : Displays numbers in descending order from the
//                          specified number of rows to 1, repeating each
//                          number for the specified number of columns
//          Date          : 11/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;

    i = iRow;
    while(i > 0)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
        i--;
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
//      4                   3               4  4  4
//                                          3  3  3
//                                          2  2  2
//                                          1  1  1
//
//      3                   5               3  3  3  3  3
//                                          2  2  2  2  2
//                                          1  1  1  1  1
//
//      1                   4               1  1  1  1
//
//      0                   3               No output
//--------------------------------------------------------------------------------//