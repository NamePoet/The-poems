#include <stdio.h>
int main() 
{
	long int i,j,n;
	//scanf("%d", &n);
	for (i=4;i<=2000000000;i++) {
		for (j=3;j<=i-1;j++) {
			if (i%j==0) {
				continue;
		    }else {
		    	printf("%d ",i);
			}
	    }
	}
	
	return 0;	
}
