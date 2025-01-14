#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    vector<vector<char>> a(8, vector<char>(8, 'A'));
    string res = "";
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        cin >> a[i][j];
        if (a[i][j] != '.') { res.push_back(a[i][j]); }
      }
    }
    cout << res << endl; 

  }
  return 0;
}