#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    bool go = true;
    for (int i = 0; i <= 4; i++) {
      if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020") {
        cout << "YES" << endl;
        go = false;
        break;
      }
    }
    if (go) cout << "NO" << endl;
  }
  return 0;
}