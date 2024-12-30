#include <stdio.h>
#include <stdlib.h>
int nthfibonaccinumber(int n);
int main(void)
{
    int* number = malloc(sizeof(int));
    if (number == NULL)
    {
        printf("Memory error\n");
        return 1;
    }
    printf("Enter which number fibonacci number you want to calculate: ");
    if (scanf("%d", number) != 1)
    {
        printf("User input error\n");
        free(number);
        return 2;
    }
    if (*number <= 0)
    {
        printf("Enter a number above 0\n");
        free(number);
        return 3;
    }
    int result = nthfibonaccinumber(*number);
    printf("The %dth fibonacci number is %d.\n", *number, result);
    free(number);
    return 0;
}
int nthfibonaccinumber(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return nthfibonaccinumber(n-1) + nthfibonaccinumber(n-2);
}