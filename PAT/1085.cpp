//http://pat.zju.edu.cn/contests/pat-a-practise/1085
//Be careful that M<=m*p is different from M/m <= m
//e.g. 17/4 <= 4 but 17 > 4 * 4
//At the first sight of this problem, I am scared that I think this problem must have some hidden skills, but it turned out that it had not any specific requirements.So I am quite fresh in sloving problems.
#include<cstdio>
#include<algorithm>
using namespace std;

long long int arr[100001];
int main() {
    //freopen("in.txt", "r", stdin);
    int N, ans = 0, idx = 0;
    long long int p;
    scanf("%d %lld", &N, &p);
    for(int i = 0; i<N; ++i)
        scanf("%lld", arr+i);
    sort(arr, arr+N);
    while(idx < N && arr[0]*p >= arr[idx])
        ++idx;
    ans = idx;
    for(int i = 1; i<= idx && idx < N; ++i){
        while(idx < N && i<=idx && arr[i]*p >= arr[idx])
            ++idx;
        ans = max(ans, idx-i);
    }
    printf("%d\n", ans);
    return 0;
}

