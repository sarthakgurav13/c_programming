#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : DisplayDigit
//          Input         : Integer
//          Output        : Display digits of the given number
//          Description   : Display each digit of the input number separately
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    while (iNo != 0)  
    {
      iDigit = iNo % 10;
      printf("%d\n",iDigit);
      iNo = iNo/10;
    }

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

  DisplayDigit(iValue);

  return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Output                              
//--------------------------------------------------------------------------------  
//      12345               5 4 3 2 1
//      789                 9 8 7
//      -246                6 4 2
//      0                   No output
//////////////////////////////////////////////////////////////////////////////////