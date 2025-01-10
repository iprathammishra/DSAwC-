#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  string s = "Timur";
  sort(begin(s), end(s));
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string t; cin >> t;
    sort(begin(t), end(t));
    if (s == t) { cout << "YES" << endl; }
    else { cout << "NO" << endl; } 
  }
  return 0;
}