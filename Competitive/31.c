//err
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iMul =1;
    
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
        iMul = iMul * iCnt;
    }
    return iMul; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number if  %d", iRet);
   
    return 0;
}