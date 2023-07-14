#include <stdio.h>

int main (){
    int num1;
    printf("Please enter a number: ");
    scanf("%d",&num1);

    if (num1%1 == 0 && num1%num1 == 0)
    {
    printf("The Entered Number %d is a Prime Number", num1);
    }
    else {
    printf("The Entered Number %d is NOT a Prime Number", num1);
    }
    return 0;
}