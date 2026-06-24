//Accept N numbers from user and accept one another number as No,check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }

}

int main()
{
    int iSize = 0, iCnt = 0,iValue = 0;
    BOOL bRet = FALSE;

    int *p = NULL;

    printf("Enter number of elements: ");
    scanf ("%d",&iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p== NULL)
    {
        printf("Unable to allocate");
        return -1;
    }

    printf("Enter %d elements: ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);
    return 0;
}