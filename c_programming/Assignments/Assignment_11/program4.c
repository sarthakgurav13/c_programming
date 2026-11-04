#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : RangeSumEven
//          Input         : Integer Starting number and Ending number
//          Output        : Sum of even numbers in the given range
//          Description   : Calculate sum of all even integers in the specified range
//          Date          : 03/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////
int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return 1;
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum += iCnt;
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
    int iValue1 = 0,iValue2 = 0,iRet = 0;

    printf("Enter Starting number: ");
    scanf("%d",&iValue1);

    printf("Enter Ending number: ");
    scanf("%d",&iValue2);
    
   if(iRet == 1)
    {
        printf("Invalid range\n");
        return EXIT_FAILURE;
    }

    
    iRet = RangeSumEven(iValue1, iValue2);

    printf("Sum of even numbers in the range: %d\n", iRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1     Input 2                Output                              
//--------------------------------------------------------------------------------  
//    10          20                       
//    5           15                       55
//    2           8                        20
//    3           7                        10
//    -5          7                        13
//    20          10                       Invalid range
////////////////////////////////////////////////////////////////////////////////