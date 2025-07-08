// take two float input do all arithmeic operation using them

#include <stdio.h>

float sum(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float multi(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    return a / b;
}

int main()
{
    float a, b, summation, subtraction, multiplication, division;
    printf("Enter the 1st number:");
    scanf("%f", &a);
    printf("\nEnter the 2nd number:");
    scanf("%f", &b);
    summation = sum(a, b);
    subtraction = sub(a, b);
    multiplication = multi(a, b);
    division = div(a, b);
    printf("\nSummation:%.2f", summation);
    printf("\nSubtraction:%.2f", subtraction);
    printf("\nMultiplication:%.2f", multiplication);
    printf("\nDivision:%.2f", division);
    return 0;
}