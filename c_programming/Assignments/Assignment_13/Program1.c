#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : CountEven
//          Input         : Integer
//          Output        : Integer
//          Description   : Count the frequency of even digits in the given number
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    while (iNo != 0)  
    {
      iDigit = iNo % 10;

      if ((iDigit % 2)== 0)
      {
            iCnt++;
      }

      iNo = iNo/10;
    }

    return iCnt;

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

    iRet = CountEven(iValue);

    printf("Frequency of even digit in number is : %d\n",iRet);


    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Output                              
//--------------------------------------------------------------------------------  
//      123456              3
//      2468                4
//      13579               0
//      204060              6
//      -1234               2
//      0                   0
//////////////////////////////////////////////////////////////////////////////////