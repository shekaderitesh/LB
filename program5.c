#include<stdio.h>

int main()
{
    int iValue1  , iValue2 , iResult ;

    printf("Enter first number : \n");
    scanf("%d",&iValue1); 

    printf("Enter second number : \n");
    scanf("%d",&iValue2); 

    iResult = iValue1 + iValue2 ;      // Businesss Logic

    printf(" Addition is :%d\n", iResult);
    

    return 0;
}