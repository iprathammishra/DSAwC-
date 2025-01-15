#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    vector<vector<char>> a(10, vector<char>(10, 'A'));
    int res = 0;
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        cin >> a[i][j];
      }
    }
    auto go = [](char& c) -> bool { if (c == 'X') { return true; } return false; };
    auto top_row = [&](int r, int c) -> int {
      int count = 0;
      for (int i = r; i <= c; i++) { count += go(a[r][i]); }
      return count;
    };
    auto bottom_row = [&](int r, int c) -> int {
      int count = 0;
      for (int i = r; i <= c; i++) { count += go(a[c][i]); }
      return count;
    };
    auto left_row = [&](int r, int c) -> int {
      int count = 0;
      for (int i = r; i <= c; i++) { count += go(a[i][r]); }
      return count;
    };
    auto right_row = [&](int r, int c) -> int {
      int count = 0;
      for (int i = r; i <= c; i++) { count += go(a[i][c]); }
      return count;
    };
    auto edges = [&](int r, int c) -> int {
      int count = 0;
      count += (go(a[r][r]) + go(a[c][c]) + go(a[r][c]) + go(a[c][r]));
      return count;
    };
    auto process = [&](int r, int c) -> int {
      int count = 0;
      count += top_row(r, c);
      count += bottom_row(r, c);
      count += left_row(r, c);
      count += right_row(r, c);
      count -= edges(r, c);
      return count;
    };
    int n1 = 0, n2 = 9;
    while (n1 != 5 && n2 != 4) {
      int val = process(n1, n2);
      if (n1 == 1 && n2 == 8) { val = val*2; }
      else if (n1 == 2 && n2 == 7) { val = val*3; }
      else if (n1 == 3 && n2 == 6) { val = val*4; }
      else if (n1 == 4 && n2 == 5) { val = val*5; }
      res += val;
      n1++; n2--;
    }
    cout << res << endl;
  }
  return 0;
}
// 0 9
// 1 8
// 2 7
// ...
// 4 5