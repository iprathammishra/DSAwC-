#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  ll tt; cin >> tt;
  while (tt--) {
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    set<ll> sset, sset1;
    for (ll i = 0; i < n; i++) 
      {cin >> a[i]; sset.insert(a[i]);}
    for (ll i = 0; i < n; i++) 
      {cin >> b[i]; sset1.insert(b[i]);}
    if ((int) sset.size() + (int) sset1.size() > 3)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    
  }
  return 0;
}
