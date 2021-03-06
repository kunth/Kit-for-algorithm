//题目：http://acm.hdu.edu.cn/showproblem.php?pid=1014
//要注意格式，最后一行也要输出两个换行，笔者就因此而PE。
//此题用了c++的bitset类，貌似用碾转相余的方法更方便便捷

#include<cstdio>
#include<bitset>
using namespace std;

int main()
{
    int S, M, cnt;
    bitset<100001> bs;
    while(scanf("%d %d", &S, &M)==2)
    {
        bs.reset();
        cnt = S%M;
        while(!bs.test(cnt))
        {
            bs.set(cnt);
            cnt = (cnt + S) % M;
        }

        if((int)bs.count() == M)
        {
            printf("%10d%10d    Good Choice\n\n", S, M);
        }
        else
        {
            printf("%10d%10d    Bad Choice\n\n", S, M);
        }
    }
    return 0;
}
