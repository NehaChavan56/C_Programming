#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("$\t*\t");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Pattern(iValue);
   
    return 0;
}