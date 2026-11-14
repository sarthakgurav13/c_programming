#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays a pattern using * and @
//          Description   : Displays * at the boundary positions and @
//                          at the inner positions. The boundary conditions
//                          compare row and column limits using the stored
//                          row and column values
//          Date          : 14/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;
    int iEndRow = 0;
    int iEndCol = 0;

    iEndCol=iCol;
    iEndRow=iRow;



    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if((i<1)||(j<1)||(j==(iEndRow-1))||(i==(iEndCol-1)))
            {
            printf("*\t");
            }
            else
            {
              printf("@\t"); 
            }
        }
        printf("\n");
    }
}
//
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
//      4                   4               *  *  *  *
//                                          *  @  @  *
//                                          *  @  @  *
//                                          *  *  *  *
//
//      4                   5               *  *  *  *  *
//                                          *  @  @  *  @
//                                          *  @  @  *  @
//                                          *  @  @  *  @
//
//      4                   3               *  *  *
//                                          *  @  @
//                                          *  *  *
//                                          *  *  *
//--------------------------------------------------------------------------------//