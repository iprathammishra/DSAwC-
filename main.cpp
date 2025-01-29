#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    ll a, b; cin >> a >> b;
    if (b % a == 0) { cout << b * (b / a) << endl; }
    else { cout << b * (a / __gcd(a, b)) << endl; }
  }
  return 0;
}