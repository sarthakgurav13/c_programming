#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CircleArea
//          Input         : 10.4
//          Output        : 339.62
//          Description   : Print the area of a circle with the given radius
//          Date          : 02/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    const float PI = 3.14159;
    return PI * fRadius * fRadius;
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

    printf("Enter Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f\n", dRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output                              
//--------------------------------------------------------------------------------  
//    10.4                        339.62
//    5.5                         95.03
//    2.2                         15.21 
//    3.3                         34.21
////////////////////////////////////////////////////////////////////////////////
