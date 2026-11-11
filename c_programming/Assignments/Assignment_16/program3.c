#include<stdlib.h>
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays an alphabet pattern
//          Description   : Displays the same uppercase alphabet in each
//                          column of a row, starting from A and incrementing
//                          the alphabet for each subsequent row
//          Date          : 11/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;

    for(j = 0; j < iRow; j++)
    {
        for(i = 0; i < iCol; i++)
        {
            printf("%c\t", 'A' + j);
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
//      3                   4               A  A  A  A
//                                          B  B  B  B
//                                          C  C  C  C
//
//      4                   3               A  A  A
//                                          B  B  B
//                                          C  C  C
//                                          D  D  D
//
//      2                   5               A  A  A  A  A
//                                          B  B  B  B  B
//
//      0                   4               No output
//--------------------------------------------------------------------------------//