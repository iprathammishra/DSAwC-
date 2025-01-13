#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> m;
    bool go = true;
    for (int i = 0; i < n; i++) {
      if (!m.count(s[i])) { m[s[i]] = i; }
      else {
        if ((m[s[i]] % 2 == 0 && i % 2 == 1) || m[s[i]] % 2 == 1 && i % 2 == 0) { go = false; cout << "NO" << endl; break; } 
      }
    }
    if (go) { cout << "YES" << endl; }
  }
  return 0;
}