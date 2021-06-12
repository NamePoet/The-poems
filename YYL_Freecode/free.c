#include <stdio.h>
int Compute_Factorial(int n);

int main()
{
    int n, FactN;
    scanf("%d", &n);
    Compute_Factorial(n);
    printf("%d", FactN);
    return 0;
}

int Compute_Factorial(int n)
{
    int M, Factorial, Factorial_M;
    
    if (n==0) {
       Factorial = 1;
    } else {
        M = n - 1;
        Compute_Factorial(M);
        Factorial = Factorial_M * n;
    }
}