#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Number        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Determine the size of a number
//          Date          : 2/11/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////
void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo <= 100)&&(iNo >=50))
    {
        printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }
}
//////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output                              
//--------------------------------------------------------------------------------  
//     5                           Small
//     50                          Medium
//     100                         Medium
//     101                         Large
//         
////////////////////////////////////////////////////////////////////////////////