#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    set<int> seen; seen.insert(a[n-1]);
    int ans = 0;
    for (int i = n-2; i >=0; i--) {
      if (seen.count(a[i])) { ans = i+1; break; }
      seen.insert(a[i]);
    }
    cout << ans << endl;
  }
  return 0;
}