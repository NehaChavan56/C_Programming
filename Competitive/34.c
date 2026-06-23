//err
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt, iResult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo % 2 != 0)
    {
        iNo = iNo - 1;
    }
    for(iCnt = iNo; iCnt >= 2; iCnt = iCnt - 2)
    {   
        iResult = iResult * iCnt;
    }
    return iResult;
}

int OddFactorial(int iNo)
{
    int iCnt, iResult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        iNo = iNo - 1;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt = iCnt - 2)
    {
        iResult = iResult * iCnt;
    }

    return iResult;
}

int FactorialDiff(int iNo)
{
    return EvenFactorial(iNo)-OddFactorial( iNo);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is  %d", iRet);
   
    return 0;
}