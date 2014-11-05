//DFS
#include<cstdio>

int stepr[] = {0, 0, -1, 1};
int stepc[] = {-1, 1, 0, 0};
const int SIZE = 21;

void dfs(char board[SIZE][SIZE], const int& row, const int& col, int r, int c, int& cnt) {
    int nr, nc;
    board[r][c] = '$';
    for(int i = 0; i<4; ++i) {
	nr = r+stepr[i];
	nc = c+stepc[i];
	if(nr>=0 && nr<row && nc>=0 && nc<col && board[nr][nc]=='.') {
	    ++cnt;
	    dfs(board, row, col, nr, nc, cnt);
	}
    }
}

int main() {
  int W, H, r, c;
  char board[SIZE][SIZE];
  //freopen("in.txt", "r", stdin);
  while(scanf("%d %d", &W, &H) && W && H) {
      getchar();
      for(int i = 0; i<H; ++i) {
	  for(int j = 0; j<W; ++j) {
	      scanf("%c", &board[i][j]);
	      if(board[i][j]=='@') {
		r = i;
		c = j;
	      }
	  }
	  getchar();
      }
      int ans = 1;
      dfs(board, H, W, r, c, ans);
      printf("%d\n", ans);
  }
  return 0;
}
