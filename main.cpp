#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
  if (b == 0) { return a; }
  return gcd(b, a%b);
}
int lcm(int a, int b) {
  return a * b /gcd(a, b);
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    int g = a[0];
    for (int i = 1; i < n; i++) { g = gcd(g, a[i]); }
    if (g == 1) { cout << 0 << endl; }
    else if (gcd(g, n) == 1) { cout << 1 << endl; }
    else if (gcd(g, n-1) == 1) { cout << 2 << endl; }
    else { cout << 3 << endl;}
  }
  return 0;
}