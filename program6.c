#include<stdio.h>

int Addition( int iNo1 , int iNo2)
{
    int iAns = 0 ;

    iAns = iNo1 + iNo2 ;          // Business Logic

    return iAns;
}

int main()
{
    int iValue1, iValue2 , iResult ;

    printf("Enter first number : \n");
    scanf("%d",&iValue1); 

    printf("Enter second number : \n");
    scanf("%d",&iValue2); 

    iResult = Addition(iValue1, iValue2);     

    printf(" Addition is :%d\n", iResult);
    

    return 0;
}