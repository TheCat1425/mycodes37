#include <stdio.h>
#include <math.h>

int isPerfectSquare(int x);
int isFibonacci(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isFibonacci(n)) {
        printf("%d is a Fibonacci number.\n", n);
    } else {
        printf("%d is not a Fibonacci number.\n", n);
    }
    return 0;
}

int isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s*s == x);
}

int isFibonacci(int n) {
    return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}
