//Every time a new triangle(nth triangle) comes, every line of the triangle may add 2*(n-1) area.
//So the triangle may add 3*2*(n-1) area at most.
#include<cstdio>

int main() {
  freopen("in.txt", "r", stdin);
  int T, N;
  int arr[10001];
  arr[0] = 2;
  for(int i = 1; i<10001; ++i)
    arr[i] = arr[i-1] + 6*i;
  scanf("%d", &T);
  for(int i = 0; i<T; ++i) {
    scanf("%d", &N);
    printf("%d\n", arr[N-1]);
  }
  return 0;
}
