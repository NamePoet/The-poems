#include <stdio.h>
int main(void)
{
    char file_name[100];
    FILE *pf_source, *pf_target;
    int k;
    pf_source = NULL;
    while (pf_source == NULL)
    { 
        printf("Enter the name of the source file : ");
        scanf("%99s", file_name);
        pf_source = fopen(file_name,"r");
    }
    fscanf(pf_source,"%d",&k);
    fclose(pf_source);

    return 0;
}