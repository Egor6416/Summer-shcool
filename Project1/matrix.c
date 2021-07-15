#include <stdio.h>
#define N 3
int main()
{
int a[N][N]={1,2,3,4,5,6,7,8,9};
for(int i=0; i<N; i++)
{
   for(int j=0; j<N; j++)
{
 printf("%d ", a[i][j]);
}
 printf("\n");

}
return(0);
}

