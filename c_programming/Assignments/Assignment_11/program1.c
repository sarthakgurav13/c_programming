#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : RangeDisplay
//          Input         : Integer Starting number and Ending number
//          Output        : Display numbers in the specified range
//          Description   : Display all integers from starting number to ending number
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////
void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
      printf("Invalid input \n");
      return;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt ++)
    {
        printf("%d \t",iCnt);
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
  int iValue1 = 0,iValue2 = 0;

  printf("Enter starting number : ");
  scanf("%d",&iValue1);

  printf("Enter ending number : ");
  scanf("%d",&iValue2);

  RangeDisplay(iValue1,iValue2);

  return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Input 2         Output                              
//--------------------------------------------------------------------------------  
//      5                   8               5 6 7 8
//      1                   5               1 2 3 4 5
//      10                  10              10
//      8                   5               Invalid input
//////////////////////////////////////////////////////////////////////////////////