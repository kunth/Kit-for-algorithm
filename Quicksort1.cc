//quicksort
//
#include<cstdio>
#include<algorithm>
using namespace std;

int partition(int A[], int left, int right)
{
  int pivot = A[right];
  int i = left - 1;
  for(int j = left; j<=right-1; ++j)
  {
    if(A[j]<=pivot)
    {
      ++i;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[right]);
  return i+1;
}

void qsort(int A[], int left, int right)
{
  if(left<right)
  {
    int pivot_idx = partition(A, left, right);
    qsort(A, left, pivot_idx-1);
    qsort(A, pivot_idx+1, right);
  }
}

int main()
{
  if(-1)
    printf("-1 can also print it\n");
  printf("1<<31=%d\n", 1<<31);
  int A[] = {12, 3, 62, 15, 9, 33, 27, 42, 50, 23, 30, 19, 1, 10};
  int len = sizeof(A) / sizeof(int);
  for(int i = 0; i<len; ++i)
    printf("%d ", A[i]);
  printf("\nAfter sorting is:\n");
  qsort(A, 0, len);

  for(int i = 0; i<len; ++i)
    printf("%d ", A[i]);
  printf("\n");

  return 0;
}
