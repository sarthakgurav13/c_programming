#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CalCulateElectricityBill        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Calculate the electricity bill
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CalCulateElectricityBill(int iUnits)
{
    float fBill = 0.0f;
    int a = 0,b = 0,c = 0;
    int x = 0,y = 0,z = 0;


    if (iUnits > 200)
    {
        a = iUnits - 100;
        b = a - 100;
            
            x = 100 * 5; 
            y =100 * 7;
            z = b * 10;
            fBill = x+y+z;
            printf("the bill is %f", fBill);      
            
    }
    else if ((iUnits <= 200)&&(iUnits > 100))
        {
            a = iUnits - 100;
            y = a * 7;
            x = 100 * 5;
            fBill = x+y;
            printf("the bill is %f", fBill);
            
        }
    else if ((iUnits <= 100)&&(iUnits >= 0))
        {
            fBill = iUnits * 5;
            printf("the bill is %f", fBill);
        }
        else if (iUnits < 0)
        {
            printf("Negative units consumtion is not valid \n ");
        }
}

   
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iUnit  = 0;

    printf("Enter the Units  : \n");
    scanf("%d", &iUnit);

    CalCulateElectricityBill(iUnit);

    return EXIT_SUCCESS;
}


