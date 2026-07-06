/*
input : iRow = 4   iCol = 4
output: 1   2   3   4   5
       -1  -2  -3   -4   -5
       1   2   3   4   5
       -1  -2  -3   -4   -5
             
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    
    for(i = 1; i <= iRow ;i++)
    {
        for(j = 1; j <= iCol;j++)
        {   
            if(i % 2 != 0)         
            {
                printf("%d\t", j);
            }
            else                    
            {
                printf("%d\t", -j );
            }
        }
        printf("\n");
    }
}      

int main()
{
    int iValue1 = 0,iValue2;

    printf("Enter the number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
