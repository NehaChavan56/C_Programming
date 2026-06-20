#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    int iMul = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    iCnt=10 ;
    while( iCnt>=1)
    {
        if(iMul = iNo*iCnt )
        {
            printf("%d \t",iMul);
        }
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Table(iValue);
   
    return 0;
}