// To find compount interest

#include <stdio.h>
#include <math.h>
int main()
{
    float principle, rate, time, CI;

    printf("enter the principle (amount) = ");
    scanf("%f", &principle);

    printf("enter the rate = ");
    scanf("%f", &rate);

    printf("enter the time = ");
    scanf("%f", &time);

    CI = principle * (pow((1 + rate / 100), time));

    printf("Compound Interest = %f", CI);
    getc;
}
