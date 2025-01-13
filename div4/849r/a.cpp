#include <bits/stdc++.h>
using namespace std;

const string s = "codeforces";
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    string t; cin >> t;
    if (s.find(t) == string::npos) { cout << "NO" << endl; }
    else { cout << "YES" << endl; }
  }
  return 0;
}