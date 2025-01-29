#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, q; cin >> n >> q;
  vector<ll> a(n); for (int i = 0; i < n; i++) cin >> a[i];
  vector<ll> pref(n+1, 0);
  for (int i = 1; i <= n; i++) {
    pref[i] = pref[i-1] ^ a[i-1];
  }
  while (q--) {
    int l, r; cin >> l >> r;
    cout << (pref[r] ^ pref[l-1]) << endl;
  }
  return 0;
}