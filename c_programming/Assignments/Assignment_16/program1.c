#include<stdlib.h>
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays a character pattern
//          Description   : Displays alphabets from A onwards in each row
//                          for the specified number of rows and columns
//          Date          : 11/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 0; j < iCol; j++)
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
//      3                   4               A  B  C  D
//                                          A  B  C  D
//                                          A  B  C  D
//
//      2                   5               A  B  C  D  E
//                                          A  B  C  D  E
//
//      1                   3               A  B  C
//
//      4                   1               A
//                                          A
//                                          A
//                                          A
//
//      0                   4               No output
//--------------------------------------------------------------------------------//