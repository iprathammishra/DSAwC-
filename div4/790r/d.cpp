#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    vector<vector<int>> G(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> G[i][j];
      }
    }
    auto one = [&](int row, int col) -> int {
      row++; col++;
      int ans = 0;
      while (row < n && col < m) { ans += G[row][col]; row++; col++; }
      return ans;
    };
    auto two = [&](int row, int col) -> int {
      row--; col--;
      int ans = 0;
      while (row >= 0 && col >= 0) { ans += G[row][col]; row--; col--; }
      return ans;
    };
    auto three = [&](int row, int col) -> int {
      row--; col++;
      int ans = 0;
      while (row >= 0 && col < m) { ans += G[row][col]; row--; col++; }
      return ans;
    };
    auto four = [&](int row, int col) -> int {
      row++; col--;
      int ans = 0;
      while (row < n && col >= 0) { ans += G[row][col]; row++; col--; }
      return ans;
    };
    int res = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int current = G[i][j];
        int D = one(i, j);
        int _D = two(i, j);
        int D2 = three(i, j);
        int _D2 = four(i, j);
        res = max(res, current + D + _D + D2 + _D2);
      }
    }

    cout << res << endl;

  }
  return 0;
}