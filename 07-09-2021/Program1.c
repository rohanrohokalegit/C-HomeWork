//display reverse number on screen
//INput: 5
//output: 5 4 3 2 1

#include <stdio.h>
void revDisplay();
int main()
{
    revDisplay();
    return 0;
}
void revDisplay()
{
    int i = 0;
    for (i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}