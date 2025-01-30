#include <bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    int c = 0;
    for (char& ch : s) {
      if (ch == '1')
        c++;
    }
    cout << c << endl;
  }
  return 0;
}