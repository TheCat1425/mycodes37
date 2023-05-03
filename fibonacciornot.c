#include<stdio.h>
int is_fibonacci(int n,int a, int b)
{
    if(n==a||n==b)
    {
        return 1;
    }
    else if(n<a||n<b)
    {
        return 0;
    }
    else
    {
        return is_fibonacci(n,b,a+b);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(is_fibonacci(n,0,1)){
        printf("%d is a fibonacci number",n);
    }
    else
    printf("%d is a not fibonacci number",n);
}