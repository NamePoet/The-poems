/*Problem statement
We want to compare daily temperatures recorded during 2 different
non bissextile years (2017 ¨C 2018 for example)
Data:
    For each year, a file with daily temperature (temperature at noon)
Result
    Comparison :
    Mean temperature of year 1
    Mean temperature of year 2
    Day to day difference between the temperatures of first year and second year
*/


/*
Analysis
    1. Ask 2 source files name and a target file name ? name_s1, name_s2, name_t 3
    arrays of characters
    2. Open the 2 source files and the target file ? pf_s1, pf_s2, pf_res, 3 file pointers
    3. Initialize sum1 and sum2 temperatures sum for each year, and ND number of the
    day (sum1, sum2 are reals, ND an integer)
    4. While end of year not reached (file is not ended)
        1. Read T1 and T2 from pf_s1 and pf_s2 (t1, t2 : reals)
        2. Add T1 to sum1 and T2 to sum2 the sums of daily
        temperatures
        3. Compute T1-T2 and record the result and the day number in
        the result file
    5. Output the mean for both years on screen and in file
*/

/*
Algorithm : Process_temp
Variables :
    name_s1, name_s2 name_t: array[0..200] of characters
    pf_s1, pf_s2, pf_res: file_link
    T1,T2, sum1,sum2 : real, err_code: integer
Instructions :
    Ask_file_names( ! name_s1, name_s2, name_t) // chapter 5 sub_algorithm
    open(name_s1,"r"! pf_s1, err_code), open(name_s2,"r"! pf_s2, err_code)
    open(name_t,"w"! pf_res, err_code), NB ? 0, sum1?0, sum2?0
    for NB from 1 to 365 step 1
    read(pf_s1 ! T1), read(pf_s2 ! T2)
    sum1 ? sum1+T1; sum2 ? sum2+T2
    write(pf_res, T2-T1, NB!)
    endfor
    close(pf_s1!), close(pf_s2!)
    write(sum1/365, sum2/365 ! )
    write(pf_res, sum1/365, sum2/365 ! ), close(pf_res!)
*/

#include <stdio.h>
int main(void)
    {char name_s1[200], name_s2[200], name_t[200];
    FILE * pf_s1, * pf_s2, * pf_res;
    float T1,T2,sum1,sum2;
    int NumJ;
    scanf("%199s",name_s1); scanf("%199s",name_s2); scanf("%199s",name_t);
    pf_s1 = fopen(name_s1,"r"); pf_s2 = fopen(name_s2,"r");
    pf_res = fopen(name_t,"w");
    sum1 = 0; sum2 = 0;
    for ( NumJ=1; NumJ<=365; NumJ=NumJ+1)
    {
        fscanf(pf_s1, "%f", &T1);
        fscanf(pf_s2, "%f", &T2);
        sum1 = sum1+T1;
        sum2 = sum2+T2;
        fprintf(pf_res, "ecart : %f\t du jour%d\n",T2-T1, NumJ);
    }
    fclose(pf_s1); fclose(pf_s2);
    printf("year 1 : %f;\t year 2 : %f\n",sum1/365,sum2/365);
    fprintf(pf_res,"year 1 mean temperature : %f;\n year 2 mean temperature: %f\n", sum1/365, sum2/365);
    fclose(pf_res); 
    
    return 0;
}