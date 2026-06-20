#include<stdio.h>
void Number(int iNo)
{
    if(iNo<50)
    {
        printf("The Number is small.");
    }
    else if(50<iNo<100)
    {
        printf("The number is medium.");
    }
    else
    {
        printf("The number is large.");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Number(iValue);
   
    return 0;
}