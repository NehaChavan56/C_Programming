#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;      // sum of factors
    int iSumNonFact = 0;   // sum of non-factors

    for(iCnt = 1; iCnt <= iNo-1; iCnt++)
    {
        if(iNo % iCnt == 0)           // is a factor
        {
            iSumFact = iSumFact + iCnt;
        }
        else                        // is not a factor
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return iSumFact - iSumNonFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}