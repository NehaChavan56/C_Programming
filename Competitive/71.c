//Accept N numbers from user and return largest number
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int i = 0, iLarge = Arr[0];

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] > iLarge)
        {
            iLarge = Arr[i];
        }
    }

    return iLarge;
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

    iRet = Maximum(p, iSize);

    printf("Largest number is %d",iRet);

    free(p);

    return 0;
}
