//How many components can N's plane divide the space into
#include<cstdio>

int main(){
  long long int n;
  while(scanf("%lld", &n)!=EOF) {
    printf("%lld\n", (n*n*n+5*n+6)/6);
  }
  return 0;
}
