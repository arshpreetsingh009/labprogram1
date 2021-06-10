#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int ch, num, i, j;
    printf("\n Menu \n 1.Factorial: \n 2.Divisor: \n Enter your choice: ");
    scanf_s("%d", &ch);
    printf("\n Enter the number: ");
    scanf_s("%d", &num);
    switch (ch)
    {
    case 1: {if (num <= 0)
        num = 1;
        for (i = num; i > 1; i--)
            num *= i - 1;
        printf("\n factorial is: %d", num);
    };
          break;
    case 2: { printf("\n divisor are: ");
        for (j = 1; j / 2 <= num; j++)`
        {
            if (num % j == 0)
                printf(" %d , ", j);
        }
    };
          break;
    }
    _getch();
    return 0;
}