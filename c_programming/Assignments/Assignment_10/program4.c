#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FhtoCs
//          Input         : 10
//          Output        : -12.2222
//          Description   : Convert Farenheit temperature into Celsius
//          Date          : 02/11/2026
//          Author        : Sarthak Babalu Gurav 
//////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * 5 / 9;
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %f\n", dRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output                              
//--------------------------------------------------------------------------------  
//    10                          -12.2222
//    20                          -6.6667
//    30                          -1.1111
//    40                          4.4444
////////////////////////////////////////////////////////////////////////////////
