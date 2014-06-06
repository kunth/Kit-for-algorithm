//Implement the function of strlen()
#include<cstdio>
size_t strlen(const char* str)
{
  const char* s = str;
  while(*s)
    ++s;
  return s-str;
}

int main()
{
  int ans = strlen("abcd ef");
  printf("%d\n", ans);
  return 0;
}
