#include <stdio.h>
#define N 5
int main()
{
int a[N];
for(int i=0; i<N; i++)
 {
	scanf("%d", &a[i]);
 }

for(int i=0; i<N; i++)
 {
	printf("%d ", a[N-i-1]);
 }
return(0);
}


