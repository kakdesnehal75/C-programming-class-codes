#include <stdio.h>

int main()
{
    double num;

    printf("Enter a double value: ");
    scanf("%lf", &num);

    printf("You entered: %.2lf\n", num);

    return 0;
}
