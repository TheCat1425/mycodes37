#include<stdio.h>
int main()
{
    int i,x,temp,n,sum = 0;
    scanf("%d",&x);
    int rev = x;
    for(i=1;i<rev;i++)
    {
        temp = rev%10;
        sum = sum*10 + temp;
        rev = rev/10;
    }
    printf("Number: %d\n",sum);
    if(x==sum)
    {
        printf("Palindrome number\n");
    }
    else{
        printf("Kisui na");
    }
    return 0;
}