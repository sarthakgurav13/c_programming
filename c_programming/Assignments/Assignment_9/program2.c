#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : DollarToINR
//          Input         : 10
//          Output        : 700
//          Description   : Convert Dollar to Indian Rupees
//          Date          : 02/11/2026
//          Author        : Sarthak Babalu Gurav
//////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    return iNo * 70;

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

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output                              
//--------------------------------------------------------------------------------  
//     5                           700
//     2                           140
//     10                          700
////////////////////////////////////////////////////////////////////////////////