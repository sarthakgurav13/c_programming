#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : FactSum
//          Input         : Integer
//          Output        : Integer
//          Description   : Calculate the sum of all non-factors of the given number
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////
int FactSum(int iNo)
{
    int iCnt = 0,iSum = 0;

    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }    
    }
    return iSum;
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

    iRet = FactSum(iValue);

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
//      6                   9
//      10                  45
//      8                   21
//      7                   20
//      1                   0
//////////////////////////////////////////////////////////////////////////////////