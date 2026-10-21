#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//      
//          Funtion  Name : Display 
//          Input :         Integer , Integer
//          Output :        Integer
//          Description :   print a number in frequrncy 
//          Date :          19/10/2026
//          Author :        Sarthak Babalu Gurav 
//
/////////////////////////////////////////////////////////////////////////////////
void Display(int iNo, int iFrequency)
{
   if(iFrequency < 0)
   {
        iFrequency = -iFrequency;
   }

    for(iFrequency = iFrequency;iFrequency > 0; iFrequency--)
    {
        printf("%d\t",iNo);
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
    int iCount = 0;

    printf("Enter a number \n");
    scanf("%d", &iValue);

    printf("Enter a Frequency \n");
    scanf("%d", &iCount);

    Display(iValue,iCount);

    return 0;

}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1       Input 2      Output
//--------------------------------------------------------------------------------
//          15             5           15   15  15  15  15
//         -10             2          -10  -10
//         -10            -2          -10  -10
//          10            -2           10   10  
//////////////////////////////////////////////////////////////////////////////////