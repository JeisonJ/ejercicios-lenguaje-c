#include <stdio.h>
#include <math.h>

double pow(double base, double exponente);
int main()
{
    double base, power, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("%.1lf^%.1lf = %.2lf", base, power, result);

    return 0;
}