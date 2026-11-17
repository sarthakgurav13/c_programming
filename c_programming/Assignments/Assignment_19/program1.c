#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays a right-angled triangular star pattern
//          Description   : Displays stars in increasing order in each row,
//                          starting with one star in the first row and
//                          increasing the number of stars in each row
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;


    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(j<=i)
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
//      4                   5               *
//                                          *  *
//                                          *  *  *
//                                          *  *  *  *
//
//      3                   4               *
//                                          *  *
//                                          *  *  *
//
//      2                   5               *
//                                          *  *
//
//      1                   3               *
//--------------------------------------------------------------------------------//