#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive non-zero integer: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input. Please enter a positive non-zero integer.\n");
        return 1;
    }
    
    int i = 1;
    while (i < n) {
        i *= 2;
    }
    
    if (i == n) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
