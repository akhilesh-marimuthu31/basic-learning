#include <stdio.h>
#include <stdlib.h>

double cal(double a, double b, char op)
{
    double result;
     switch (op)
        {
        case '+':
            printf("doing addition \n");
            result= a+b;
            printf("o/p is = %lf\n", result);
            return result;
            break;
        case '-':
            result= a-b;
            printf("o/p is = %lf\n", result);
            return result;
            break;
        case '*':
            result= a*b;
            printf("o/p is = %lf\n", result);
            break;
        case '/':
            result= a/b;
            printf("o/p is = %lf\n", result);
            return result;
            break;
        default :
            printf("Error, unknown operator....\n");
        }
        printf("\n");
    return 0;
}

int main()
{
    while(1)
    {
        char op;
        double a, b;
        double result;
        printf("enter operator which you want to perform ");
        scanf(" %c", &op);
        if(op == 'x')
            exit(0);
        printf("enter any two number ");
        scanf("%lf %lf", &a, &b);
        printf("calling calculator function");
        result = cal(a, b, op);
    }
    return 0;
}

