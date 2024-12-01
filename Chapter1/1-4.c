#include<stdio.h>

main()
{
    float cel, fahr;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    cel = lower;
    
    printf("Celsius to Fahrenheit Conversion\n");
    
    while(cel <= upper)
    {
        fahr = (9.0/5.0) * cel + 32;
        printf("%3.0f %3.1f\n", cel, fahr);
        cel += step;
    }
}
