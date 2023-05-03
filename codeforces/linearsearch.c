#include<stdio.h>
int main(){
    int i;
    int pos =-1;
    int num[]={10,2,30,15,28,5};
    int value;
    scanf("%d",&value);
    for(i=0;i<6;i++)
    {
        if(value==num[i])
        {
        pos = i+1;
        break;
        }
    }
    if(pos==-1)
    printf("Not found\n");
    else
     printf("The position of %d is: %d\n",value,pos);

    return 0;
}