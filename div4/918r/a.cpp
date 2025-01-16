#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int a, b, c; cin >> a >> b >> c;
    map<int, int> m;
    m[a]++; m[b]++; m[c]++;
    for (auto& [num, count] : m) {
      if (count == 1) { cout << num << endl; break; }
    }
  }
  return 0;
}
