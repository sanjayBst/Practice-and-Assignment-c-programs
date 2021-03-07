// To convert temperature from faranhiet into celcius

#include <stdio.h>
void main()
{
    float Celcius, Faranhiet;
    printf("Enter the temperature (in degree Faranhiet) = ");
    scanf("%f", &Faranhiet);
    Celcius = (Faranhiet - 32) * 5 / 9;
    printf("%f", Celcius);
    getc;
}