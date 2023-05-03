#include<stdio.h>
int main(){
    double  x;
    printf("Enter a number: ");
    scanf("%lf",&x);
    if(x<0)
        printf("negative\n");
    else if(x>0)
        printf("Positive\n");
    else
        printf("positive\n");

    return 0;
}