//Date : 2013-11-06
//Author : fibonacci
//Note: 题目来源: http://acm.hdu.edu.cn/showproblem.php?pid=1287
//9510996	2013-11-06 11:29:57	Accepted	1287	31MS	240K	951 B	G++	fibo_nacci

#include<cstdio>
#include<vector>
using namespace std;

int main()
{
    int N, num;
    vector<int> vec;
    while(scanf("%d", &N)==1)
    {
        vec.clear();
        for(int i = 0; i < N; ++i)
        {
            scanf("%d", &num);
            vec.push_back(num);
        }

        bool flag;
        char c;
        for(c='A'; c <='Z'; ++c)
        {
            flag = true;
            for(vector<int>::iterator it = vec.begin(); it!=vec.end(); ++it)
            {
                if((int)(*it ^ c) <'A' || (int)(*it ^ c) >'Z')
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                break;
            }
        }

        for(vector<int>::iterator it = vec.begin(); it!=vec.end(); ++it)
        {
            printf("%c", *it ^ c);
        }
        printf("\n");
    }

    return 0;
}
