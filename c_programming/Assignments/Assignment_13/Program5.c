#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : CountDiff
//          Input         : Integer
//          Output        : Integer
//          Description   : Calculate the difference between the sum of even digits and odd digits in the given number
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iESum = 0, iOSum = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    while (iNo != 0)  
    {
      iDigit = iNo % 10;
      if ((iDigit % 2) == 0)
      { 
        iESum = iESum + iDigit;
      }
      else
      {
        iOSum = iOSum + iDigit;
      }
      iNo = iNo/10;
    }

    return iESum-iOSum;

}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

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
//      12345               -3
//      2468                20
//      13579               -25
//      102030              2
//      -1234               2
//      0                   0
//////////////////////////////////////////////////////////////////////////////////