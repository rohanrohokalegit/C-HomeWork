//C Program to Check Whether a Number is Palindrome or Not


#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL chkPerfect(int);
int reverseNumber(int);
int main()
{
    int iValue = 0;
    BOOL bret = FALSE;
    printf("Enter The Number");
    scanf("%d", &iValue);
    bret = chkPerfect(iValue);
    if (bret == TRUE)
    {
        printf("it is Perfect Number");
    }
    else
    {
        printf("it is not perfect Number");
    }
    return 0;
}
BOOL chkPerfect(int iNo)
{
    int iNumber = 0;
    iNumber = reverseNumber(iNo);
    if (iNo == iNumber)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int reverseNumber(int iNo)
{
    int Digit = 0;
    int iRev = 0;
    while (iNo != 0)
    {
        Digit = iNo % 10;
        iRev = iRev * 10 + Digit;
        iNo = iNo / 10;
    }
    return iRev;
}