#include <stdio.h>
#define N 3
int main()
{
int a[N][N];
for(int i=0; i<N; i++)
  {
        for(int j; j=0; j++)
	 {
		a[i][j]=1;
		printf("%d ", a[i][j]);
		a[i][j]=a[i][j]++;
	 }
  }
for (int i=N; i=N; i++)
 {
	for(int j=0; j<N; j++)
	 {
		printf("%d ", a[i][j]);
                a[i][j]=a[i][j]++;
	 }
 }
for (int i=N; i=N; i++)
 {
        for(int j=N; j>N; j--)
         {
                printf("%d ", a[i][j]);
                a[i][j]=a[i][j]++;
         }
 }

return(0);
}

