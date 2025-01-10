#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    string t; cin >> t;
    bool go = true;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'R' && t[i] == 'R') { continue; }
      else if (s[i] == 'G' && (t[i] == 'B' || t[i] == 'G')) { continue; }
      else if (s[i] == 'B' && (t[i] == 'B' || t[i] == 'G')) { continue; }
      else { go = false; break; }
    }
    if (go) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
  }
  return 0;
}