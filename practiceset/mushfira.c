#include<stdio.h>
int main()
{
    // FILE *fx;
    // char samplefile[50];
    // gets(samplefile);
    // fx = fopen(samplefile, "w");
    // fprintf(fx, "Mushfira\n");
    // fputs(" \n ", fx);
    // fclose(fx);
    // return 0;
    FILE *new;
    new = fopen("Fall223","r");
    fprintf(new,"mushfira");
    fputs("\n",new);
    fclose(new);
    return 0;

}