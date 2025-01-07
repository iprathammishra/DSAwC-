#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    vector<string> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    int ans = 1e9;
    auto pre = [](const string& s, const string& t) -> int {
      int res = 0;
      for (int i = 0; i < (int) s.size(); i++) {
        res += abs(s[i] - t[i]);
      }
      return res;
    };
    for (int i = 0; i < n; i++) {
      for (int j = i+1; j < n; j++) {
        ans = min(ans, pre(a[i], a[j]));
      }
    }
    cout << ans << endl;
  }
  return 0;
}