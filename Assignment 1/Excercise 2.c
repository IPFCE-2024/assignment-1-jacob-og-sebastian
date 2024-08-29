#include <stdio.h>
#define c_convert 1.609
int main(void)
    {double d_km,d_miles;
    printf("Enter the distance in miles> ");
    scanf("%lf", &d_km);
    d_miles=c_convert*d_km;
    printf("That equals %f kilometers.\n", d_miles);
    return (0);
    }
