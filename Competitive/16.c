#include<stdio.h>

int MultiFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    for(i = 1; i<= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult *i;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = MultiFact(iValue);

    printf("%d", iRet);

    return 0;
}