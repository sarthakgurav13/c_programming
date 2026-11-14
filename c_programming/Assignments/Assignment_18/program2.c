#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays a pattern using * and #
//          Description   : Displays * from the beginning of each row
//                          until the column index reaches (iCol - i),
//                          and displays # in the remaining columns
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
            if((j < ( iCol - i ) ))
            {
            printf("*\t");
            }
            else
            {
              printf("#\t"); 
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
//      4                   5               *  *  *  *  *
//                                          *  *  *  *
//                                          *  *  *
//                                          *  *
//      
//      3                   4               *  *  *  *
//                                          *  *  *
//                                          *  *
//
//      2                   3               *  *  *
//                                          *  *
//
//      1                   4               *  *  *  *
//--------------------------------------------------------------------------------//