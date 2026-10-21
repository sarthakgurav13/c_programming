
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//      
//          Function Name : DisplayEvenFactors
//          Input         : Integer
//          Output        : Even factors of the input number
//          Description   : Prints even factors of N
//          Date          : 19/10/2026
//          Author        : Sarthak Babalu Gurav
//
/////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    
    { 
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))

         printf("%d\n", iCnt); 
    }
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input           Output
//--------------------------------------------------------------------------------
//          7           2,4,6,8,10,12,14                  
//////////////////////////////////////////////////////////////////////////////////