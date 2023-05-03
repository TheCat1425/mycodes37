#include<stdio.h>
int main(){
int a,b,c,d,e;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

int max = a;
{
    if(max<b)
    {
        max = b;
    }
     else if(max<c)
    {
        max = c;
    }
     else   if(max<d)
    {
        max = d;
    }
        else
    {
        max = e;
    }
    printf("%d",max);
}

}