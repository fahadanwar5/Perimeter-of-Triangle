#include <stdio.h>
int main(){

int num1,num2,num3,sum;
printf("Enter first num\n");
scanf("%d",&num1);
printf("Enter second number:\n");
scanf("%d",&num2);
printf("Enter third number:\n");
scanf("%d",&num3);

if (num1 + num2 > num3)
{
    if (num1 + num3 > num2)
    {
        if (num2 + num3> num1)
        {
            printf("Valid\n");
            sum = num1 +num2 + num3;
            printf("Perimeter is = %d\n", sum);
        }
     }
    else
    {
        printf("invalid");
    }
}

return 0;
}
