#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);
signed main() {
  PRATHAM
  int tt; cin >> tt;
  while (tt--) {
    int N, Q; cin >> N >> Q;
    vector<vector<int>> field(1001, vector<int>(1001, 0));
    while (N--) {
      int H, W; cin >> H >> W;
      field[H][W] += H*W;
    }
    vector<vector<int>> pref(1001, vector<int>(1001, 0));
    for (int i = 1; i <= 1000; i++) {
      for (int j = 1; j <= 1000; j++) {
        pref[i][j] = field[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
      }
    }
    while (Q--) {
      int from_row, from_col, to_row, to_col;
      cin >> to_row >> to_col >> from_row >> from_col;
      cout << pref[to_row][to_col] - pref[to_row][from_col-1] - pref[from_row-1][to_col] + pref[from_row-1][from_col-1] << endl;
    }
  }
  return 0;
}