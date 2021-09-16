#include <stdio.h>
#include <stdbool.h>
bool chkPerfect(int);
int main()
{
    int iValue = 0;
    bool bret = false;
    printf("Enter The Number");
    scanf("%d", &iValue);
    bret = chkPerfect(iValue);
    if (bret == true)
    {
        printf("it is a Perfect Number");
    }
    else
    {
        printf("it is Not Perfect Number");
    }
    return 0;
}
bool chkPerfect(int iNo)
{
    int iCnt = 0;
    int sumFact = 0;
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            sumFact = sumFact + iCnt;
        }
    }
    if (sumFact == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
