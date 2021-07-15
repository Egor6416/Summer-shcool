#include <stdio.h>
#define N 3
int main()
{
int a[N][N];
for(int i=0; i<N; i++)
 {

	for(int j=0; j<N; j++)
  {
		if ((i<N-j-1) && (j<N-i-1))
		a[i][j]=1;
		else a[i][j]=0;
        	printf("%d ", a[i][j]);
  }
	printf("\n");
 }
return(0);
}

