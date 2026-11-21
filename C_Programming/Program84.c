#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("Divisible by 3")
    }
    else
    {
        printf("It is not divisible by 3")

    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}