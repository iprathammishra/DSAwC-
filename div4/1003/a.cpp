#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  ll tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    ll n = (int)s.size()-2;
    for (ll i = 0; i < n; i++) {
      cout << s[i];
    }
    cout << "i" << endl;
  }
  return 0;
}