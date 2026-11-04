#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : CountRange
//          Input         : Integer
//          Output        : Integer
//          Description   : Calculate the multiplication of all non-zero digits in the given number
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iMul = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    iMul = 1;
    while (iNo != 0)  
    {
      iDigit = iNo % 10;
      if (iDigit != 0)
      { 
        iMul = iMul * iDigit;
      }
      iNo = iNo/10;
    }

    return iMul;

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

    iRet = CountRange(iValue);

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
//      12345               120
//      1023                6
//      456                 120
//      100                 1
//      -234                24
//      0                   1
//////////////////////////////////////////////////////////////////////////////////