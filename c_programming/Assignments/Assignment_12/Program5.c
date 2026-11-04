#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Count
//          Input         : Integer
//          Output        : Integer
//          Description   : Count the number of digits less than 6 in the given number
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

int Count(int iNo)
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

      if (iDigit < 6)
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

    iRet = Count(iValue);

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
//      123456              5
//      987654              2
//      555                 3
//      6789                0
//      -123                3
//      0                   0
//////////////////////////////////////////////////////////////////////////////////