#include <stdio.h>
#include <math.h>

int main()
{
    int choice, x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Choose the operation to be performed:\n");
    printf("1. Pow(x,n)\n");
    printf("2. Add(x,n)\n");
    printf("3. Sub(x,n)\n");
    printf("4. Mul(x,n)\n");
    printf("5. Div(x,n)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Pow(%d,%d) = %lf", x, n, pow(x,n));
            break;

        case 2:
            printf("Add(%d,%d) = %d", x, n, x+n);
            break;

        case 3:
            printf("Sub(%d,%d) = %d", x, n, x-n);
            break;

        case 4:
            printf("Mul(%d,%d) = %d", x, n, x*n);
            break;

        case 5:
            if(n == 0)
                printf("Error: division by zero");
            else
                printf("Div(%d,%d) = %d", x, n, x/n);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

