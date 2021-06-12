#include <stdio.h>
int main()
{
	int i,j,k,n,l;
	int a[5][5];
	n = 0;
	for (i=0; i<5; i++) {
		for (j=0; j<5; j++) {
			if (i==j) {
				a[i][j] = 1;
			}
			for (k=0; k<=i-1;k++) {
				a[i][k] = 2;
			}	
			for (l=i+1; l<5;l++) {
				a[i][l] = 0;
			}
	
		}		
	}	
	for (i=0;i<5;i++) {
		for (j=0;j<5;j++) {
				printf("%d ",a[i][j]);
				n++;
				if (n%5==0) {
					printf("\n");
					n=0;
				}
			
		}
	}
	
	return 0;
}


//1 0 0 0 0
//2 1 0 0 0
//2 2 1 0 0
//2 2 2 1 0
//2 2 2 2 1

