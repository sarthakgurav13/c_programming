#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FactorialDiff
//          Input         : 5
//          Output        : 8 - 15 = -7 
//          Description   : Print the difference between even and odd factorials of input numbers
//          Date          : 02/11/2026
//          Author        : Sarthak Babalu Gurav 
//////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    return (iEvenFact - iOddFact);
    
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output                              
//--------------------------------------------------------------------------------  
//     5                           -7
//     6                           33
//     4                           5
//     3                           -2
////////////////////////////////////////////////////////////////////////////////