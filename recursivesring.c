#include<stdio.h>
#include<string.h>
int is_pal(char* string, int start, int end)
{
    if(start>=end)
    {
        return 1;
    }
    else if(string[start]==string[end]){
        return is_pal(string,start+1,end-1);
    }
    else
    return 0;
}
int main()
{
    char str[100];
    scanf("%s",str);
    if(is_pal(str,0,strlen(str)-1))
    {
        printf("%s is a palindrome\n",str);
    }
    else
    {
        printf("%s not palindrome\n");
    }
    return 0;
}