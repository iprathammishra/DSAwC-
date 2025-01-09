#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    set<char> se;
    int res = 0;
    for (char& ch : s) {
      if (!se.count(ch)) { res++; se.insert(ch); }
      res++;
    }
    cout << res << endl;
  }
  return 0;
}