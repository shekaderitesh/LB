//Problems on numbers:


-------------------------------------------
            Operation ||(OR)
-------------------------------------------
    result1     result2     final result
-------------------------------------------
    true        true            true      shortcircuit:bcoz first line laach true bhetata..tya mule second conditioncheack mhi krt
    true        false           true      //Problems on numbers:


#include <stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo%3==0) || (iNo%5==0))  //logical OR
    {
        printf("Number is divisible by 3 or 5");
    }
    else 
    {
        printf("Number is not divisible by 3 or 5");
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