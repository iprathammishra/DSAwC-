#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int one = 0, two = 0;
    for (int i = 0; i < 3; i++) {
      one += (s[i] - '0');
    }
    for (int i = 3; i < 6; i++) {
      two += (s[i] - '0');
    }
    if (one == two) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
  }
  return 0;
}