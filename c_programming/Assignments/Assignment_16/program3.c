#include<stdlib.h>
#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0;
    int j = 0;

    for(j = 0; j < iRow; j++)
    {
        for(i = 0; i < iCol; i++)
        {
            printf("%c\t", 'A' + j);
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
