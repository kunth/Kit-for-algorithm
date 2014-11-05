#include<cstdio>

int main() {
    //freopen("in.txt", "r", stdin);
    bool flag;
    for(int num; scanf("%d", &num)!=EOF;) {
	flag = true;
	for(int i = 1; i*i<num && flag; ++i){
	    for(int j = i; j*j<num && flag; ++j) {
		for(int k = j; i*i+j*j+k*k<=num; ++k) {
		    if(i*i+j*j+k*k==num) {
			printf("%d %d %d\n", i, j, k);
			flag = false;
			break;
		    }
		}
	    }
	}
    }
}
