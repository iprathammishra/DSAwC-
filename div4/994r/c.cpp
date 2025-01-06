#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a > b) { swap(a, b); }
    if (c > d) { swap(c, d); }
    if (
      (c <= a && a <= d && c <= b && b <= d) ||
      (a <= c && c <= b && a <= d && d <= b) ||
      (a > c && a > d && b > c && b > d) || 
      (a < c && a < d && b < c && b < d)
    ) { cout << "NO" << endl; } 
    else { cout << "YES" << endl; }
  }
  return 0;
}
