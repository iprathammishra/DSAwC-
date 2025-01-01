#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, m; cin >> n >> m;
  vector<pair<int, int>> a(n); for (int i = 0; i < n; i++) { cin >> a[i].first >> a[i].second; }
  vector<int> b(m+1, 0); b[0] = 1;
  for (auto& p : a) {
    for (int i = p.first; i <= p.second; i++) {
      b[i] = 1;
    }
  }
  cout << count(b.begin(), b.end(), 0) << endl;
  for (int i = 0; i <= m; i++) {
    if (b[i] == 0) { cout << i << " "; }
  }
  cout << endl;
  return 0;
}