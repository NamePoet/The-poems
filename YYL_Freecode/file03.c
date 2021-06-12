#include <stdio.h>
#include <stdlib.h>
#define NL 10
#define NC 5 //NL, NC used to define number of lines and columns//
int main(void)
{ 
    int nlig, ncol, tab[NL][NC]; 
    FILE *fp;
    for (nlig =0; nlig<NL; nlig = nlig +1) { //rand() returns a random positive integer//
        for (ncol =0; ncol <NC; ncol = ncol +1)
        { 
            tab[nlig][ncol]=rand()-16300;} } // end of loop, nlig line, ncol column//
            fp=fopen("titi.txt","w");
                for(nlig =0; nlig <NL; nlig = nlig +1) {
                    for(ncol =0; ncol <NC; ncol = ncol +1) { fprintf(fp,"%8d",tab[nlig][ncol]); }
                    fprintf(fp,"\n"); }
                    fclose(fp);
                    fp=fopen("titi.txt","r");
                        for(nlig =0; nlig <NL; nlig=nlig+1) { 
                            for(ncol =0; ncol <NC; ncol = ncol +1)
                                {
                                    fscanf(fp, "%d", &tab[nlig][ncol]);
                                } 
                        } 
                        fclose(fp); 
return 0;}