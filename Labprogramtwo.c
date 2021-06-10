#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b;//b is the number of terms used to find sum;
    float r, sum;
    printf("\n Enter value of a: ");
    scanf_s("%d", &a);
    printf("\n Enter value of r: ");
    scanf_s("%f", &r);
    printf("\n enter value of b: ");
    scanf_s("%d", &b);

    if (r > 1)
        sum = a * (pow(r, b) - 1) / (r - 1);
    else
        sum = a * (1 - pow(r, b)) / (1 - r);
    printf("\n the sum of the given geometric series is: %f", sum);
    _getch();
    return 0;

}