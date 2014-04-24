//Date : 2013-11-05
//Author : fibonacci
//Note: http://pat.zju.edu.cn/contests/pat-b-practise/1019
//Acceptd
//此题要注意输出格式

#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int N, a, b, c, d, num, revnum;
    vector<int> vec;
    //freopen("in.txt", "r", stdin);
    scanf("%d", &N);
    a = N / 1000;
    b = (N % 1000)/100;
    c = (N % 100)/10;
    d = N % 10;
    if(a==b && b==c && c==d)
    {
        printf("%04d - %04d = 0000\n", N, N);
        return 0;
    }
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    sort(vec.begin(), vec.end());
    num = vec.at(3) * 1000 + vec.at(2)*100 + vec.at(1)*10 +vec.at(0);
    revnum = vec.at(0) * 1000 + vec.at(1)*100 + vec.at(2)*10 +vec.at(3);
    printf("%04d - %04d = %04d\n", num, revnum, num-revnum);
    N = num-revnum;
    while(N!=6174)
    {
        vec.clear();
        a = N / 1000;
        b = (N % 1000)/100;
        c = (N % 100)/10;
        d = N % 10;
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
        vec.push_back(d);
        sort(vec.begin(), vec.end());
        num = vec.at(3) * 1000 + vec.at(2)*100 + vec.at(1)*10 +vec.at(0);
        revnum = vec.at(0) * 1000 + vec.at(1)*100 + vec.at(2)*10 +vec.at(3);
        printf("%04d - %04d = %04d\n", num, revnum, num-revnum);
        N = num - revnum;
    }

    return 0;
}
