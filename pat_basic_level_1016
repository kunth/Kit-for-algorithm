//Date : 
//Author : fibonacci
//Note: http://pat.zju.edu.cn/contests/pat-b-practise/1016

#include<cstdio>
using namespace std;

int main()
{
    int DA, DB, A, B, cnt, PA = 0, PB = 0;
    //freopen("in.txt", "r", stdin);
    scanf("%d %d %d %d", &A, &DA, &B, &DB);
    cnt = 0;
    while(A > 0)
    {
        A % 10 == DA ? ++cnt : 0;
        A /= 10;
    }
    for(int i = 0; i < cnt; ++i)
    {
        int tmp = 1;
        for(int j = 0; j < i; ++j)
            tmp*=10;
        PA += tmp*DA;
    }

    cnt = 0;
    while(B > 0)
    {
        B % 10 == DB ? ++cnt : 0;
        B /= 10;
    }
    for(int i = 0; i < cnt; ++i)
    {
        int tmp = 1;
        for(int j = 0; j < i; ++j)
            tmp*=10;
        PB+= tmp*DB;
    }
    printf("%d\n", PA+PB);
    return 0;
}
