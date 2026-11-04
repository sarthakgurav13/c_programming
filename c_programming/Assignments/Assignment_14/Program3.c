#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : FactRev
//          Input         : Integer
//          Output        : Display non-factors of the given number
//          Description   : Display all numbers from 1 to the given number that are not factors of the given number
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }    
    }
    printf("\n");
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Output                              
//--------------------------------------------------------------------------------  
//      6                   4  5
//      10                  3  6  7  8  9
//      8                   3  5  6  7
//      7                   2  3  4  5  6
//      1                   No output
//////////////////////////////////////////////////////////////////////////////////