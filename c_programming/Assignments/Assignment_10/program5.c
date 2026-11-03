#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : SquareMeter
//          Input         : 5   
//          Output        : 0.464515
//          Description   : Convert square feet into square meter
//          Date          : 02/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d",&iValue);

    dRet =  SquareMeter(iValue);

    printf("Area in square meters is %f\n", dRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output                              
//--------------------------------------------------------------------------------  
//     5                           0.464515
//     2                           0.185800
//     10                          0.929000
//     8                           0.743200
////////////////////////////////////////////////////////////////////////////////