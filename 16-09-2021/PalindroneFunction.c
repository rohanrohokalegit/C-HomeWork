//C Program to Check Whether a Number is Palindrome or Not
#include <stdio.h>
#include <stdbool.h>
bool palindrome(int);
int main()
{
    int iValue = 0;
    bool bret = false;
    printf("Enter The Number");
    scanf("%d", &iValue);
    bret = palindrome(iValue);
    if (bret == true)
    {
        printf("It is a palindrome Number");
    }
    else
    {
        printf("it is Not palindrome Number");
    }
    return 0;
}
bool palindrome(int iNo)
{
    int Temp = iNo;
    int Digit = 0;
    int iRev = 0;
    while (iNo != 0)
    {
        Digit = iNo % 10;
        iRev = iRev * 10 + Digit;
        iNo = iNo / 10;
    }
    if (Temp == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}