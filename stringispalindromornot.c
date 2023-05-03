#include<stdio.h>
#include<string.h>
void palindrome(char str[])
{
    int n= strlen(str)-1;
    for(int i=0;i<n;i++){
        for(int j=n;j>=0;j--)
            {
                if(str[i]!=str[j])
                {
                    printf("The string is not palindrome");
                    return;
                }
                else
                {
                    printf("The string is palindrome");
                    return;
                }
            }
    }
}
int main()
{
    char str[100];
    
    //scanf("%s",&str);
    gets(str);
    palindrome(str);
    return 0;
}