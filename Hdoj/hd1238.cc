#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(const string& lhs, const string& rhs){
  return lhs.length() < rhs.length();
}

int main() {
  //freopen("in.txt", "r", stdin);
  int T, N;
  string line;
  cin >> T;
  vector<string>vec;
  while(T){
    --T;
    cin >> N;
    vec.clear();
    for(int i = 0; i<N; ++i){
      cin >> line;
      vec.push_back(line);
    }
    if(N==1) {
      cout<<line.length()<<endl;
      continue;
    }
    sort(vec.begin(), vec.end(), cmp);
    bool next = true;
    for(int gap = vec[0].length(); gap && next; --gap){
      for(int begin = 0; begin+gap<=vec[0].length(); ++begin) {
        string str = vec[0].substr(begin, gap);
        string rstr = string(str.rbegin(), str.rend());
        bool flag = true;
        for(int i = 1; i<N && flag; ++i) {
          if(vec[i].find(str)==string::npos && vec[i].find(rstr)==string::npos) {
            flag = false;
            break;
          }
        }
        if(flag) {
          printf("%d\n", gap);
          next = false;
          break;
        }
      }
    }
    if(next)
      printf("0\n");
  }
  return 0;
}
