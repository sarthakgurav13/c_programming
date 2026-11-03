#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Factorial    
//          Input         : 5
//          Output        : 120
//          Description   : Print factorial of a number
//          Date          : 02/11/2026
//          Author        : Sarthak Babalu Gurav   
//////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
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

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d\n", iRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output                              
//--------------------------------------------------------------------------------  
//     5                           120
//     2                           2
//     0                           1
//     10                          3628800
////////////////////////////////////////////////////////////////////////////////