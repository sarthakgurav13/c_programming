#include<stdlib.h>
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Pattern
//          Input         : Integer (Number of Rows and Columns)
//          Output        : Displays an alphabet and number pattern
//          Description   : Displays lowercase alphabets in odd rows and
//                          numbers in even rows, repeating the sequence
//                          from the beginning after reaching the column count
//          Date          : 13/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;
    int ipnt = 1;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",96+iCnt);
                iCnt= iCnt + 1;

                if(iCnt > iCol)
                {
                    iCnt = 1;
                }

            }
            else
            {
                printf("%d\t",ipnt);
                ipnt = ipnt+1;

                if(ipnt > iCol)
                {
                    ipnt = 1;
                }

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
//      3                   4               a  b  c  d
//                                          1  2  3  4
//                                          a  b  c  d
//
//      4                   3               a  b  c
//                                          1  2  3
//                                          a  b  c
//                                          1  2  3
//
//      2                   5               a  b  c  d  e
//                                          1  2  3  4  5
//
//      3                   2               a  b
//                                          1  2
//                                          c  d
//--------------------------------------------------------------------------------//