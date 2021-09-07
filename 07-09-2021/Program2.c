#include <stdio.h>
void Display(int);
int main()
{

    int ivalue = 0;
    printf("Enter the First Number");
    scanf("%d", &ivalue);
    Display(ivalue);
    return 0;
}
void Display(int iNo1)
{
    if (iNo1 < 0) //input updator
    {
        iNo1 = -iNo1;
    }

    while (iNo1 >= 1)
    {
        printf("%d\n", iNo1);
        iNo1--;
    }
}
