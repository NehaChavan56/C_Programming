#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    iCnt=1 ;
    while( iCnt<=5)
    {
        if(iMul = iNo*iCnt )
        {
            printf("%d \t",iMul);
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);
   
    return 0;
}