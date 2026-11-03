
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//      
//          Function Name : PrintEven
//          Input         : Integer
//          Output        : Even numbers up to the input number
//          Description   : Prints even numbers up to N
//          Date          : 19/10/2026
//          Author        : Sarthak Babalu Gurav
//
/////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {  
      printf("%d\n", iCnt*2); 
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

    PrintEven(iValue);

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