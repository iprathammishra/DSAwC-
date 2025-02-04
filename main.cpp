#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  ll tt; cin >> tt;
  while (tt--) {
    ll n; cin >> n;
    ll odd = 0, even = 0;
    vector<ll> a(n);
    for (auto& i : a)
      {cin >> i; if (i&1) odd++; else even++;}
    if (even == 0)
      cout << odd-1 << endl;
    else
      cout << odd+1 << endl;
 }
  return 0;
}

/*
3 1 4 1 5 9 2 6 5 3
*/