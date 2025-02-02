#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  ll tt; cin >> tt;
  while (tt--) {
    ll n, k; cin >> n >> k;
    vector<ll> a(n+1);
    for (ll i = 1; i <= n; i++) 
        cin >> a[i];
    if (n == k) {
      ll res = -1;
      for (ll i = 2; i <= n; i += 2) {
        if (a[i] != i/2) {
          res = i/2; break;
        }
      }
      if (res == -1)
          res = n/2 + 1;
      cout << res << endl;
    }
    else {
      ll pos = -1;
      for (ll i = 2; i <= n - k + 2; i++) {
        if (a[i] != 1) {
          pos = i; break;
        }
      }
      if (pos == -1) {
        ll count = 2;
        for (ll i = n - k + 1; i <= n; i += 2) {
          if (a[i] != count) 
            break;
          count++;
        }
        cout << count << endl;
      }
      else 
        cout << 1 << endl; 
    }
  }
    
  return 0;
}