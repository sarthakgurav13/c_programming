#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CheckVotingEligibiliy             
//          Input         : Integer ,Integer
//          Output        : Integer
//          Description   : Checks voting eligibility based on age
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CheckVotingEligibiliy(int iAge)
{
    if(iAge < 0)
    {
       printf("%d Enter a valid age \n", iAge); 
    }
    else if(iAge >= 18)
    {
        printf("%d Eligible for Voting \n", iAge);
    }
    else
    {
        printf("%d Not Eligible for Voting \n", iAge);
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
    

    printf("Enter the Age : \n");
    scanf("%d", &iValue1);

    CheckVotingEligibiliy(iValue1);

    return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1           Input 2                   Output
//--------------------------------------------------------------------------------
//         -5            -10                        -5 is greter
//          6            10                         10 is greter
//          5            0                          5 is greter
//          0            -5                         0 is grater
//         -6            21                        21 is grater
//////////////////////////////////////////////////////////////////////////////////