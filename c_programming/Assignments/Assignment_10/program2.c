#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : RectArea
//          Input         : 5.3   9.78
//          Output        : 51.834
//          Description   : Print the area of a rectangle with the given length and width
//          Date          : 02/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fLength)
{
    return fLength * fWidth;
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Length : \n");
    scanf("%f",&fValue1);
    printf("Enter Width : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %f\n", dRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                       Output                              
//--------------------------------------------------------------------------------  
//    5.3 9.78                    51.834
//    2.5 4.5                     11.250
//    3.3 6.6                     21.780
//    1.1 2.2                     2.420
////////////////////////////////////////////////////////////////////////////////
