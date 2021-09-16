#include <stdio.h>
#include <stdbool.h>
bool chkPrime(int);
int main()
{
    int iValue = 0;
    bool bret = false;
    printf("Enter The Number");
    scanf("%d", &iValue);
    bret = chkPrime(iValue);
    if (bret == true)
    {
        printf("it is Prime Number");
    }
    else
    {
        printf("it is not prim number");
    }
    return 0;
}
bool chkPrime(int iNo)
{
    int icnt = 0;
    for (icnt = 2; icnt <= iNo / 2; icnt++)
    {
        if ((iNo % icnt) == 0)
        {
            break;
        }
    }
    if (icnt == (iNo / 2) + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}