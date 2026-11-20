#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkVowel
//          Input         : Character pointer (string)
//          Output        : BOOL (TRUE or FALSE)
//          Description   : It checks whether the given string contains at least
//                          one vowel (A, E, I, O, U) in uppercase or lowercase.
//                          It returns TRUE if a vowel is found; otherwise,
//                          it returns FALSE.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    while( *str != '\0')
    {
       if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'||
          *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Entre  string:\n");
    scanf("%[^\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                   Output
//--------------------------------------------------------------------------------
//      Apple                   Contains Vowel
//      SKY                     There is no Vowel
//      HELLO                   Contains Vowel
//      rhythm                  There is no Vowel
//      Education               Contains Vowel
//      XYZ123                  There is no Vowel
//      a                       Contains Vowel
//////////////////////////////////////////////////////////////////////////////////