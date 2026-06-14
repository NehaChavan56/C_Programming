/////////////////////////////////////////
//
//  Include required header files 
//
/////////////////////////////////////////


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////
//
//  Function name : Check
//  Input :         int
//  Description:    Checks whether number is divisible by 5
//  Date :          28/05/2026
//  Author :        Neha Haribhau Chavan
//
/////////////////////////////////////////

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////
//
//  Application to check whether the number is divisible by 5
//
/////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        printf("Divisible by 5.");
    }
    else
    {
        printf("Not Divisible by 5.");
    }

    return 0;
}

/////////////////////////////////////////
//
//  Input :     10
//  Output :    Divisible by 5.
//
/////////////////////////////////////////