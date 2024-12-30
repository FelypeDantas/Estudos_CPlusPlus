#include <stdio.h>

int fib(int n);

int main()
{
    int result = fib(12);
    printf("Fibonacci of 12 is: %d\n", result);
    return 0;
}

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n-2);
}