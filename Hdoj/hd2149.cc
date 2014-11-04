#include<cstdio>

int main() {
	int N, M;
	freopen("in.txt", "r", stdin);
	while(scanf("%d %d", &M, &N)!=EOF) {
		if(M > N) {
			if(M % (N+1))
				printf("%d\n", M%(N+1));
			else
				printf("none\n");
		}else {
			int diff = N-M;
			printf("%d", M);
			while(diff) {
				printf(" %d", ++M);
				--diff;
			}
			printf("\n");
		}
	}
	return 0;
}
