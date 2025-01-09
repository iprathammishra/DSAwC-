#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (s == "yes") { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
  }
  return 0;
}