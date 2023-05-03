#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter traiangle angle: ");
    scanf("%d%d%d",&x,&y,&z);
    int sum = x+y+z;
    if(((x>0&&x<180)||(y>0&&y<180)||(z>0&&z<180))&&sum==180)
    printf("Yes\n");
    else 
    printf("No\n");

    return 0;
}