#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    int num1,num2,num3;
    int big;
    int small;
    int middle;



    printf("3 tane sayi giriniz:\t");scanf("%d %d %d", &num1, &num2, &num3);
if(num1>num2)
{
    big = num1;
    small = num2;

}
else
{
    big = num2;
    small = num1;
}

if (num3>big)
{
    middle = big;
    big = num3;
}
else
{
    if(num3>small)
    {
        middle = num3;
    }
    else
    {
        middle = small;
        small = num3;
    }
}

printf("%d %d %d",big, middle, small);

    return 0;
}
