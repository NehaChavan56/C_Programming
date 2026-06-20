//err
#include<stdio.h>
int DollartoINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = DollartoINR(iValue);

    printf("Value in INR is %d", iRet);
   
    return 0;
}