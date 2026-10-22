#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CalCulateBonus        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Calculate the Bonus amount
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CalCulateBonus(float fSalary , int iYears)
{
    float fBonus = 0.0f;

    if(fSalary < 0)
    {
        printf("Negative salary is not valid \n ");
    }
    else if(iYears < 0)
    {
        printf("Negative years is not valid \n ");
    }
    else if(fSalary >= 0 && iYears >= 0)
    {
        if (iYears > 10)
        {
            fBonus = (fSalary * 15)/100;
            printf("Bonus is  %f", fBonus);      
                
        }
        else if ((iYears <= 10 )&&(iYears >= 5))
            {
                fBonus = (fSalary * 10)/100;
            printf("Bonus is  %f", fBonus);
                
            }
        else if ((iYears < 5)&&(iYears >= 0))
            {
                fBonus = (fSalary * 5)/100;
                printf("Bonus is  %f", fBonus);
            }
        else if (iYears < 0)
            {
                printf("Negative years is not valid \n ");
            }
    }
}   
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fSalary = 0;
    int iYears = 0;

    printf("Enter salary  : \n");
    scanf("%f", &fSalary);

    printf("Enter years of service  : \n");
    scanf("%d", &iYears);

    CalCulateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}


