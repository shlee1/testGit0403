#include <stdio.h>

int main(void)
{
	int N, M, L;
	int cnt;
	N=0;
		
	scanf("%d", &N);
	
	M = N;
	
	for(cnt=0; cnt<M; cnt++) {
		if(M > (N+cnt)) printf(" ");
		else		    printf("*");
	
		if(cnt == (M-1)) {
			N = N - 1;
			cnt = -1;
			if(N == 0) break;
			
			printf("\n");
		}
	}
	
	return 0;
}
