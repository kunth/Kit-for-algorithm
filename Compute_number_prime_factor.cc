#include<cstdio>
#include<cmath>

bool prime(long long p)
{
  if(p<=0)
    return false;
  if(p<=3)
    return true;
  long long x = sqrt(p) + 1;
  for(int i = 5; i<=x; i+=2)
  {
    if(!(p%i))
      return false;
  }
  return true;
}

int record[10000];

int prime_factor(long long p)
{
  int cnt = 0;
  if(prime(p))
  {
    record[cnt++] = p;
    return cnt;
  }
  long long x = sqrt(p)+1;
  bool flag = true;
  for(int i = 2; i<=x; ++i)
  {
    while(!(p%i))
    {
      record[cnt++] = i;
      p /= i;
    }
    if(p==1)
      return cnt;
  }
  if(p!=1)
    record[cnt++] = p;
  return cnt;
}

int main()
{
  long long p = 823;
  int cnt = prime_factor(p);
  printf("p = %lld\n", p);
  for(int i = 0; i<cnt; ++i)
  {
    printf("%d ", record[i]);
  }
  return 0;
}
