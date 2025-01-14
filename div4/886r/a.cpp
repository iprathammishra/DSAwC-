#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int a, b, c; cin >> a >> b >> c;
    vector<int> v = {a, b, c}; sort(begin(v), end(v));
    if (v[2] + v[1] >= 10) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
  }
  return 0;
}