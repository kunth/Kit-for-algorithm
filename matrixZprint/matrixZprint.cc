// print the element of matrix in 'Z' shape
//

#include<vector>
#include<cstdio>
using namespace std;

template <class T>

vector<T> zPrint(vector<vector<T> >&matrix){
	vector<T>ans;
	if(matrix.empty())
		return ans;
	int row = matrix.size(), col = matrix[0].size();
	bool flag = true;
	for(int i = 0; i<row+col-1; ++i) {
		if(flag) {
			for(int j = 0; j<=i; ++j)
				if(j < row && i-j < col)
					ans.push_back(matrix[j][i-j]);
		}else {
			for(int j = i; j>=0; --j)
				if(j<row && i-j<col)
					ans.push_back(matrix[j][i-j]);
		}

		flag = !flag;
	}
	return ans;
}

int main() {
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {6, 7, 8, 9, 10};
	int arr3[] = {11, 12, 13, 14, 15};
	int arr4[] = {16, 17, 18, 19, 20};
	int arr5[] = {21, 22, 23, 24, 25};
	vector<int>v1(arr1, arr1+sizeof(arr1)/sizeof(int));
	vector<int>v2(arr2, arr2+sizeof(arr2)/sizeof(int));
	vector<int>v3(arr3, arr3+sizeof(arr3)/sizeof(int));
	vector<int>v4(arr4, arr4+sizeof(arr4)/sizeof(int));
	vector<int>v5(arr5, arr5+sizeof(arr5)/sizeof(int));
	vector<vector<int> >vv;
	vv.push_back(v1);
	vv.push_back(v2);
	vv.push_back(v3);
	vv.push_back(v4);
	vv.push_back(v5);
	vector<int>ans = zPrint(vv);
	for(auto e : ans)
		printf("%d ", e);
	printf("\n");
	return 0;
}
