#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : FactRev
//          Input         : Integer
//          Output        : Display factors in reverse order
//          Description   : Display all factors of the given number in descending order excluding the number itself
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo/2 ; iCnt >= 1; iCnt--)
    {
        if ((iNo % iCnt) == 0)
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
//      12                  6  4  3  2  1
//      10                  5  2  1
//      8                   4  2  1
//      7                   1
//      1                   No output
//////////////////////////////////////////////////////////////////////////////////