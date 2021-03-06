//Date : 
//Author : fibonacci
//Note: http://pat.zju.edu.cn/contests/pat-b-practise/1018
//Accepted

//逻辑控制上要小心点
//s 胜利， p 平局, f 负
//数组shou分别记录两个玩家胜利的手势个数，按'B','C', 'J'顺序

#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char c1, c2;
    int N, s1,p1,f1,s2,p2,f2, shou1[3], shou2[3];//按'B','C', 'J'顺序
    s1 = p1 = f1 = s2 = p2 = f2 = 0;
    memset(shou1, 0, sizeof(shou1));
    memset(shou2, 0, sizeof(shou2));
    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
    {
        getchar();
        scanf("%c %c", &c1, &c2);
        switch(c1)
        {
        case 'C':
            c1 > c2 ? (++f1, ++s2, ++shou2[0]) :( c1 == c2 ? (++p1, ++p2) : (++s1, ++f2, ++shou1[1]));
            break;
        case 'B':
            if(c2=='B')
                (++p1, ++p2);
            else if(c2=='C')
                (++s1, ++f2, ++shou1[0]);
            else
                (++f1, ++s2, ++shou2[2]);
            break;
        case 'J':
            if(c2=='B')
                (++s1, ++f2, ++shou1[2]);
            else if(c2=='J')
                (++p1, ++p2);
            else
                (++f1, ++s2, ++shou2[1]);
        }
    }
    printf("%d %d %d\n", s1, p1, f1);
    printf("%d %d %d\n", s2, p2, f2);
    (shou1[0] >= shou1[1] && shou1[0] >= shou1[2]) ? printf("B ") :(shou1[1]>=shou1[2] ? printf("C ") : printf("J "));
    (shou2[0] >= shou2[1] && shou2[0] >= shou2[2]) ? printf("B\n") :(shou2[1]>=shou2[2] ? printf("C\n") : printf("J\n"));
    return 0;
}
