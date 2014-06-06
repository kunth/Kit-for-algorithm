#include<cstdio>
//suppose the elems in the array are distinct
int find_min_in_rotated_array(int arr[], int len)
{
  if(len == 0)
    return arr[0];
  else if(len == 1)
    return arr[0]<arr[1] ? arr[0] : arr[1];
  else if(arr[len/2]>arr[len])
    return find_min_in_rotated_array(arr+len/2, len-len/2);
  else
    return find_min_in_rotated_array(arr, len/2);
}

int main()
{
  int arr[] = {6, 7, 8, 9, 1, 2, 3, 4};
  int ans = find_min_in_rotated_array(arr, sizeof(arr)/sizeof(int)-1);
  printf("ans = %d\n", ans);
  return 0;
}
