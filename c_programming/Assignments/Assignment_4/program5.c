#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CheckDivisiblity            
//          Input         : Integer 
//          Output        : Integer
//          Description   : Check Divisiblity by 5 or not 
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CheckDivisiblity(int iNo)
{
    if(iNo % 5 == 0)
    {
       printf("%d is Divisible by 5  \n", iNo); 
    }
    else if(iNo % 5 != 0)
    {
        printf("%d is Not Divisible by 5 \n", iNo);
    }
    
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    

    printf("Enter the Number  : \n");
    scanf("%d", &iValue1);

    CheckDivisiblity(iValue1);

    return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1         Output
//--------------------------------------------------------------------------------
//         -5           -5 is Divisible by 5 
//          6            6 is Not Divisible by 5                
//          5            5 is Divisible by 5
//          0            0 is Divisible by 5
//         -6           -6 is Not Divisible by 5
//////////////////////////////////////////////////////////////////////////////////