#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Integer number of rows and columns
//          Output        : Display a pattern using * and #
//          Description   : Display stars at even column positions and hash
//                          symbols at odd column positions in each row.
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
            if(j % 2 == 0)
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
//      4           5           * # * # *
//                              * # * # *
//                              * # * # *
//                              * # * # *
//--------------------------------------------------------------------------------
//      3           4           * # * #
//                              * # * #
//                              * # * #
//--------------------------------------------------------------------------------
//      2           3           * # *
//                              * # *
//--------------------------------------------------------------------------------
//      1           1           *
//--------------------------------------------------------------------------------