#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    int a, b; cin >> a >> b;
    if (a % b == 0) { cout << 0 << endl; }
    else if (a < b) { cout << b - a << endl; }
    else {
      int x = a / b;
      cout << b*(x+1) - a << endl;
    }
  }
  return 0;
}