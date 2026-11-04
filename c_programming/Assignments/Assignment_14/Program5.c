#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : FactDiff
//          Input         : Integer
//          Output        : Integer
//          Description   : Calculate the difference between the sum of factors and non-factors of the given number
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCnt = 0,iSumF = 0, iSumNonF =0;

    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSumNonF = iSumNonF + iCnt;
        }
        else 
        {
            iSumF = iSumF + iCnt;
        }    
    }
    return iSumF - iSumNonF;
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0,iRet = 0 ;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Output                              
//--------------------------------------------------------------------------------  
//      6                   -9
//      10                  -35
//      8                   -13
//      7                   -8
//      1                   1
//////////////////////////////////////////////////////////////////////////////////