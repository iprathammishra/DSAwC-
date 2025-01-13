#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    bool go = true;
    pair<int, int> p = {0, 0};
    for (char& ch : s) {
      if (ch == 'U') { p.second++; }
      else if (ch == 'R') { p.first++; }
      else if (ch == 'D') { p.second--; }
      else { p.first--; }

      if (p.first == 1 && p.second == 1) { cout << "YES" << endl; go = false; break; }
    }
    if (go) { cout << "NO" << endl; }
  }
  return 0;
}