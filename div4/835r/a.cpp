#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int a, b, c; cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    for (int i = 0; i < 3; i++) {
      if (v[i] != mx && v[i] != mn) { cout << v[i] << endl; break; }
    }

  }
  return 0;
}