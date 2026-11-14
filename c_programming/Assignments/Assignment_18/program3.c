#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays a pattern using $ and *
//          Description   : Displays $ at diagonal positions where the row
//                          index is equal to the column index and *
//                          at all remaining positions
//          Date          : 14/11/2026
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
            if(i==j)
            {
            printf("$\t");
            }
            else
            {
              printf("*\t"); 
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
//      3                   3               $  *  *
//                                          *  $  *
//                                          *  *  $
//
//      4                   3               $  *  *
//                                          *  $  *
//                                          *  *  $
//                                          *  *  *
//
//      2                   4               $  *  *  *
//                                          *  $  *  *
//
//      1                   1               $
//--------------------------------------------------------------------------------//