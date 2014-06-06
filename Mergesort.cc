#include<cstdio>

void merge(int A[], int p, int q, int r)
{
  int* m1 = new int[q-p+1];
  int* m2 = new int[r-q];
  if(!m1 || !m2)
    return;
  for(int i = 0; i<q-p+1; ++i)
    m1[i] = A[p+i];
  for(int i = 0; i<r-q; ++i)
    m2[i] = A[q+1+i];
  int x=0, y=0;
  while(x<q-p+1 && y<r-q)
  {
    if(m1[x] < m2[y])
    {
      A[p+x+y] = m1[x];
      ++x;
    }
    else
    {
      A[p+x+y] = m2[y];
      ++y;
    }
  }
  if(x==q-p+1)
  {
    while(y<r-q)
    {
      A[p+x+y] = m2[y];
      ++y;
    }
  }
  else if(y==r-q)
  {
    while(x<q-p+1)
    {
      A[p+x+y] = m1[x];
      ++x;
    }
  }
}

void mergesort(int A[], int p, int r)
{
  if(p<r)
  {
    int q = (p+r)/2;
    mergesort(A, p, q);
    mergesort(A, q+1, r);
    merge(A, p, q, r);
  }
}


int main()
{
  int A[] = {23, 12, 7, 10, 3, 19, 8, 21};
  mergesort(A, 0, sizeof(A)/sizeof(int)-1);
  for(int i = 0; i<sizeof(A)/sizeof(int); ++i)
    printf("%d ", A[i]);
  printf("\n");
  return 0;
}
