#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CalCulateDiscount        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Calculate the Discount bill
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CalCulateDiscount(float fAmount)
{
    float fFinalAmount = 0.0f;
    float fDiscount = 0.0f;


    if (fAmount >= 5000)
    {
        fDiscount = (fAmount * 20)/100;
        fFinalAmount = fAmount - fDiscount;  

        printf("the bill is %f", fFinalAmount);      
            
    }
    else if ((fAmount < 5000)&&(fAmount >= 1000))
        {
            fDiscount = (fAmount * 10)/100;
            fFinalAmount = fAmount - fDiscount;  
            printf("the bill is %f", fFinalAmount);
            
        }
    else if ((fAmount < 1000)&&(fAmount >= 0))
        {
            fDiscount = (fAmount * 0)/100;
            fFinalAmount = fAmount - fDiscount;  
            printf("the bill is %f", fFinalAmount);
        }
        else if (fAmount < 0)
        {
            printf("Negative Number is not valid \n ");
        }
}

   
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fAmount  = 0;

    printf("Enter purchase amount  : \n");
    scanf("%f", &fAmount);

    CalCulateDiscount(fAmount);

    return EXIT_SUCCESS;
}


