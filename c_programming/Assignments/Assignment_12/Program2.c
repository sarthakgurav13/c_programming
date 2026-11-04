#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkZero
//          Input         : Integer
//          Output        : Boolean
//          Description   : Check whether the given number contains zero
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    while (iNo != 0)  
    {
      iDigit = iNo % 10;

      if (iDigit == 0)
      {
            return 1;
      }

      iNo = iNo/10;
    }

    return 0;

}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (bRet == 1)
    {
        printf("Zero found \n");
    }
    else 
    {
        printf("Zero did not found \n");
    }

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Output                              
//--------------------------------------------------------------------------------  
//      1023                Zero found
//      12345               Zero did not found
//      -405                Zero found
//      0                   Zero did not found
//////////////////////////////////////////////////////////////////////////////////