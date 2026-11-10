#include<stdlib.h>
#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d\t",iCnt++); 
        }
        printf("\n");
    }
     
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);
    
    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
