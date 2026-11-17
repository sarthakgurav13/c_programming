#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays an increasing number pattern
//          Description   : Displays blank spaces before the diagonal
//                          position and column numbers from 1 onwards
//                          after the diagonal position in each row
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;



    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(j<i)
            {
                printf(" \t");
            }
            else if(j>=0)
            {
                printf("%d\t",j+1);
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

    printf("Enter the Rows : ");
    scanf("%d",&iValue1);

    printf("Enter the Column : ");
    scanf("%d",&iValue2);

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
//      4                   5               1  2  3  4  5
//                                             2  3  4  5
//                                                3  4  5
//                                                   4  5
//
//      3                   4               1  2  3  4
//                                             2  3  4
//                                                3  4
//
//      2                   3               1  2  3
//                                             2  3
//
//      1                   4               1  2  3  4
//--------------------------------------------------------------------------------//