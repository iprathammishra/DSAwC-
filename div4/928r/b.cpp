#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    auto count = [](string s) -> int {
      int c = 0;
      for (char& ch : s) { if (ch == '1') { c++; } }
      return c;
    };
    vector<string> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    for (int i = 0; i+1 < n; i++) {
      int one = count(a[i]);
      int two = count(a[i+1]);
      if (one == two && one != 0) { cout << "SQUARE" << endl; break; }
      else if (two == (2*one + 1) || (one == (2*two + 1))) {
        cout << "TRIANGLE" << endl; break;
      }
    }
  }
  return 0;
}