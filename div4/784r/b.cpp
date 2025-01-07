#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    unordered_map<int, int> m;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; m[a[i]]++; }
    int ans = -1;
    for (auto& p : m) {
      if (p.second >= 3) { ans = p.first; break; }
    }
    cout << ans << endl; 
  }
  return 0;
}