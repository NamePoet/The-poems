#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

int main()
{
int x, y, z;
float real;
int* address;
char character;
real = 0; 
x=3;
y=4;
z=4;
x=((y>3)||(z<4));
real=cos(z*pi);

//printf("real = %lf, real);

real = (int) (x*pi*100);

printf("real = %f", real);

character = 'a';
address = &x;
*address = y+3;
    return 0;
}
