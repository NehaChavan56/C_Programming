//ASCII Values - American Standard code for information interchange
// upper case(A-Z) - 65 to 90
// lower case(a-z) - 97 to 122

#include <stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue -32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue + 32);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character: \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}