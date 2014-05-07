//Author: fibonacci
//Not:Judge whether it is a binary tree according to the post_travel sequence
//It may have bugs
#include<cstdio>
/*
typedef struct
{
  int val;
  TreeNode* next;
}TreeNode;
*/

bool is_post_travel(int A[], int len)
{
  if(len<=0)
    return false;
  if(len==1)
    return true;

  int root = A[len-1], cnt = 0;
  while(cnt < len && A[cnt] < root)
    ++cnt;
  //only has left tree or right tree
  if(!cnt || cnt==len-1)
    return is_post_travel(A, len-1);
  int p = cnt;
  while(cnt < len && A[cnt] > root)
    ++cnt;
  if(cnt != len-1)
    return false;
  return is_post_travel(A, p) && is_post_travel(A+p, len-p-1);
}

int main()
{
  int A[] = {5, 7, 6, 9, 11, 10, 8};
  int len = sizeof(A) / sizeof(int);
  bool flag = is_post_travel(A, len);
  if(flag)
    printf("yes\n");
  else
    printf("no\n");
  return 0;
}
