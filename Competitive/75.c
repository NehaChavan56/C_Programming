//Accept N numbers from user and display summation of digits of each number
#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int i = 0;
    int iNum = 0, iSum = 0, iDigit = 0;

    for(i = 0; i < iLength; i++)
    {
        iSum = 0;           
        iNum = Arr[i];

        if(iNum < 0)       
        {
            iNum = -iNum;
        }

        while(iNum > 0)
        {
            iDigit = iNum % 10;     
            iSum   = iSum + iDigit; 
            iNum   = iNum / 10;     
        }

        printf("Sum of digits of %d = %d\n", Arr[i], iSum);
    }
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}
