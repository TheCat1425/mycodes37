#include<stdio.h>
long int fact(int n){
if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
int main(){
   long long int n;
    printf("Enter A Number To Find Factorial: ");
    scanf("%lld",&n);
    printf("The Factorial of %lld = %lld", n, fact(n));
    return 0;
}

