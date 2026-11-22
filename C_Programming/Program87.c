//Problems on numbers:

//Question=run same code without using AND 
//answer:nested if insted of AND

//TIPS:always write this code in interview(if-else)
//bcoz next question is 1000%fix minimize code then write && and optimize


#include <stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo%3==0))  
    {
        if((iNo%5==0))  //if inside if 
        {
            printf("Number is divisible by 3 and 5");
        }
    }
    else 
    {
        printf("Number is not divisible by 3 and 5");
    }
}
int main()
{
    int iValue=0;

    printf("Enyer number \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}