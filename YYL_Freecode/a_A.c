#include <stdio.h>
int main() 
{
    char a,A;
    a = 'a';
    A = 'A';
    printf("%c\n", A+'a'-'A');  //大写转小写
    printf("%c\n", a+'A'-'a');  //小写转大写
    printf("%d\n",'A'-'a');   //两段间的距离
    return 0;
}