#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Integer number of elements
//          Output        : Display even numbers in ascending order
//          Description   : Display the specified number of even numbers
//                          starting from 2.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int i = 0;
    int iCnt =2;

    for(i = 0; i < iNo; i++)
    { 
        printf("%d\t",iCnt);
        iCnt=iCnt+2;
    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;


    printf("Enter Number of Element : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input          Output
//--------------------------------------------------------------------------------
//      5              2 4 6 8 10
//      4              2 4 6 8
//      3              2 4 6
//      1              2
//--------------------------------------------------------------------------------