#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  vector<vector<int>> m(n, vector<int>(n, 0)); for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) { cin >> m[i][j]; } }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0 || i == n-1) {
      ans += accumulate(m[i].begin(), m[i].end(), 0);
    }
    else {
      ans += (m[i][0] + m[i][n-1]);
    }
  }
  
  cout << ans << endl;
  return 0;
}