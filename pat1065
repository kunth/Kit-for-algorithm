//Date : 2013-11-02
//Author : fibonacci
//Note: http://pat.zju.edu.cn/contests/pat-a-practise/1065
//转换为考虑异号


#include<cstdio>
using namespace std;

int main()
{
    int T;
    long long int A, B, C;
    //freopen("in.txt", "r", stdin);
    scanf("%d", &T);
    for(int i = 0; i < T; ++i)
    {
        scanf("%lld %lld %lld", &A, &B, &C);
        if((A >= 0 && B <= 0)||(A <=0 && B>=0))
        {
            A+B>C ? printf("Case #%d: true\n", i+1) : printf("Case #%d: false\n", i+1);
        }
        else
        {
            if(A>0)
            {
                if(C<=0)
                    printf("Case #%d: true\n", i+1);
                else if(A > C-B)
                {
                    printf("Case #%d: true\n", i+1);
                }
                else
                {
                    printf("Case #%d: false\n", i+1);
                }
            }
            else
            {
                if(C>=0)
                    printf("Case #%d: false\n", i+1);
                else if(A > C-B)
                {
                    printf("Case #%d: true\n", i+1);
                }
                else
                {
                    printf("Case #%d: false\n", i+1);
                }
            }
        }
    }
    return 0;
}
