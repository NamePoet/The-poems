#include <stdio.h>
int main()
{
    char file_name[100];
    FILE *pf_source, *pf_target;
    int k;
    printf("Enter the name of the source file : \n");
    scanf("%99s", file_name);
    pf_source = fopen(file_name,"r");
    pf_target = fopen("target_file.txt","w");


    return 0;
}


//fclose(fp);    ╧ь╠унд╪Ч