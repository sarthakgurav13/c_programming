#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : MulFact
//          Input         : Integer
//          Output        : Integer
//          Description   : Calculate the multiplication of all factors of the given number excluding the number itself
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////
int MulFact(int iNo)
{
    int iCnt = 0,iMul = 0;

    for (iCnt = 1,iMul = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }    
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

    iRet = MulFact(iValue);

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
//      6                   6
//      10                  10
//      12                  144
//      8                   8
//      1                   1
//      0                   1
//////////////////////////////////////////////////////////////////////////////////