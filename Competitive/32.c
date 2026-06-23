//err
#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0; 
    int iResult = 1;

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

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number if  %d", iRet);
   
    return 0;
}