#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : KMtoMeter
//          Input         : 5
//          Output        : 5000
//          Description   : Convert distance kilometer into meter
//          Date          : 02/11/2026
//          Author        : Sarthak Babalu Gurav 
//////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is %d\n", iRet);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output                              
//--------------------------------------------------------------------------------  
//    5                           5000
//    2                           2000
//    10                          10000
//     8                          8000
////////////////////////////////////////////////////////////////////////////////
