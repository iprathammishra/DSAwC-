#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    ll l, r; cin >> l >> r;
    if (2*l > r) { cout << -1 << " " << -1 << endl; }
    else { cout << l << " " << 2*l << endl; }
  }
  return 0;
}