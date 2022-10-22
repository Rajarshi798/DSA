#include <stdio.h>
int main() {
    int number;
    printf("Enter the Integer: ");
    scanf("%d", &number);
    if(number==0)
    {
        printf("Even");
    }else if(number%2==0)
    {
        printf("Even");
    }else
    {
        printf("Odd");
    }
    return 0;
}
