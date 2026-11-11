#include<stdlib.h>
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays an alphabet pattern
//          Description   : Displays uppercase alphabets in odd rows and
//                          lowercase alphabets in even rows
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
            if(i % 2 == 0)
            {
                printf("%c\t",'a' + j);
            }
            else
            {
            printf("%c\t", 'A' + j);
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
//      3                   4               A  B  C  D
//                                          a  b  c  d
//                                          A  B  C  D
//
//      4                   3               A  B  C
//                                          a  b  c
//                                          A  B  C
//                                          a  b  c
//
//      2                   5               A  B  C  D  E
//                                          a  b  c  d  e
//
//      0                   4               No output
//--------------------------------------------------------------------------------//