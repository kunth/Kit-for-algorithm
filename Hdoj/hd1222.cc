#include<cstdio>

int main() {
    int p, m, n, tmp;
    freopen("in.txt", "r", stdin);
    scanf("%d", &p);
    for(int i = 0; i<p; ++i) {
	scanf("%d %d", &m, &n);
	while(m) {
	    if(m==1) {
	       printf("NO\n");
	        break;
	    }
       	    tmp = m;
	    m = n % m;
      	    n = tmp;
        }
	if(!m)
	  printf("YES\n");
    }
    return 0;
}
