#include<cstdio>
#include<cstring>

int main() {
  //freopen("in.txt", "r", stdin);
  char ch, line[201];
  int len;
  double cnt;
  while(scanf("%c %s", &ch, line)!=EOF) {
    getchar();
    len = strlen(line);
    cnt = 0;
    for(int i = 0; i<len; ++i) {
      if(line[i]==ch || line[i] == ch+'A'-'a' || line[i] == ch+'a'-'A')
        ++cnt;
    }
    printf("%.5lf\n", cnt/len);
  }
}
