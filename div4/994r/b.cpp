#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    unordered_set<char> se(s.begin(), s.end());
    if ((int) se.size() > 1) {
      string t = s;
      reverse(begin(t), end(t));
      if (t == s) { sort(begin(t), end(t)); } 
      cout << "YES" << endl; 
      cout << t << endl;
    }
    else { cout << "NO" << endl; } 
  }
  return 0;
}