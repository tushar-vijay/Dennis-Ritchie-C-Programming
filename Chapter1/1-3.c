#include<stdio.h>

main()
{
    float cel, fahr;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    
    printf("Fahrenheit to Celsius Conversion\n");
    
    while(fahr <= upper)
    {
        cel = (5.0/9.0) * (fahr-32);
        printf("%3.0f %6.1f\n", fahr, cel);
        fahr += step;
    }
}
