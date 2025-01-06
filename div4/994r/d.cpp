#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int ans = 1;
    int n = (int) s.size();
    bool go = false;
    for (int i = 0; i+1 < n; i++) {
      ans += (s[i] != s[i+1]);
      go |= (s[i] == '0' && s[i+1] == '1');
    }
    cout << ans - go << endl;
  }
  return 0;
}