//http://pat.zju.edu.cn/contests/pat-a-practise/1086

#include <cstdio>
#include <stack>
#include <cstring>
#include <vector>
using namespace std;

typedef struct _node {
    int val;
    struct _node*left;
    struct _node*right;
    _node(int value): val(value) {
        left = right = 0;
    }
}treeNode;

void postOrder(treeNode* root, vector<int>&ans){
    if(!root)
        return;
    postOrder(root->left, ans);
    postOrder(root->right, ans);
    ans.push_back(root->val);
}

int main() {
    //freopen("in.txt", "r", stdin);
    int N, num;
    scanf("%d", &N);
    char str[10];
    stack<treeNode*>st;
    treeNode *root, *cur, *last = NULL;
    for(int i = 0; i<2*N; ++i) {
        scanf("%s %d", str, &num);
        if(!i) {
            last = root = new treeNode(num);
            st.push(root);
        } else {
            if(!strcmp(str, "Push")) {
                cur = new treeNode(num);
                if(st.empty()) {
                    last->right = cur;
                } else {
                    if(last->left)
                        last->right = cur;
                    else
                        last->left = cur;
                }
                st.push(cur);
                last = cur;
            } else if(!strcmp(str, "Pop")) {
                last = st.top();
                st.pop();
            }
        }
    }
    vector<int>ans;
    postOrder(root, ans);
    for(int i = 0; i<ans.size(); ++i)
        i ? printf(" %d", ans[i]) : printf("%d", ans[i]);
    printf("\n");
    return 0;
}

