#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> m1; m1[s[0]]++;
    map<char, int> m2; 
    for (int i = 1; i < n; i++) { m2[s[i]]++; }
    int res = (int) m1.size() + (int) m2.size();
    for (int i = 1; i < n; i++) {
      m1[s[i]]++;
      m2[s[i]]--;
      if (m2[s[i]] == 0) { m2.erase(s[i]); }
      res = max(res, (int) m1.size() + (int) m2.size());
    }
    cout << res << endl;
  }
  return 0;
}