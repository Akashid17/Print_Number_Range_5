
#include<stdio.h>

void DisplayRangeReverse(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("Invalid Range\n");
        return;
    }

    for(int i = iNo2; i >= iNo1; i--)
    {
        printf("%d ",i);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    DisplayRangeReverse(iValue1,iValue2);

    return 0;
}