#include<stdio.h>

void PrintEven(int iNo)
{
    int i = 0 ;
    int iCnt = 0;
    
    if(iNo <= 0)
    {
        return;
    }

    for(i= 2; iCnt < iNo ;i = i+2)
    {
        printf("%d \t", i);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}