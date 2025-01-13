#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n, q; cin >> n >> q;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    vector<long long> pref(n);
    pref[0] = a[0];
    long long sum = accumulate(begin(a), end(a), 0);
    for (int i = 1; i < n; i++) { pref[i] = pref[i-1]+a[i]; }
    while (q--) {
      int l, r, k; cin >> l >> r >> k;
      l--; r--;
      long long tsum = k*(r-l+1);
      long long _sum = sum+tsum;
      if (l == 0) { _sum -= pref[r]; }
      else { _sum -= (pref[r] - pref[l-1]); }
      if (_sum & 1) { cout << "YES" << endl; }
      else { cout << "NO" << endl; }
    }
  }
  return 0;
}