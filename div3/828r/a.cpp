#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    string s; cin >> s;
    map<int, char> m;
    bool go = true;
    for (int i = 0; i < n; i++) {
      if (m.count(a[i]) == 0) { m[a[i]] = s[i]; }
      else {
        if (m[a[i]] != s[i]) { cout << "NO" << endl; go = false; break; }
      }
    }
    if (go) cout << "YES" << endl; 
  }
  return 0;
}