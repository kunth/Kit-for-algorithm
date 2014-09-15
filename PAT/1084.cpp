//http://pat.zju.edu.cn/contests/pat-a-practise/1084

#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
  char str1[81], str2[81];
  gets(str1);
  gets(str2);
  vector<char>vec;
  int p1 = 0, p2 = 0;
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  for(int i = 0; i<len1; ++i)
    if(str1[i]>='a' && str1[i]<='z')
      str1[i] += ('A'-'a');
  for(int i = 0; i<len2; ++i)
    if(str2[i]>='a' && str2[i]<='z')
      str2[i] += ('A'-'a');

  while(p2 < len2) {
    while(p1 < len1 && str1[p1] != str2[p2]){
      if(find(vec.begin(), vec.end(), str1[p1])==vec.end()) {
        vec.push_back(str1[p1]);
      }
      ++p1;
    }
    ++p1;
    ++p2;
  }

  for(int i = 0; i<vec.size(); ++i)
    printf("%c", vec[i]);
  printf("\n");
}

