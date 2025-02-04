#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  ll tt; cin >> tt;
  while (tt--) {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (auto& i : a)
      cin >> i;
    sort(begin(a), end(a));
    ll L = 0, R = n-1;
    ll res = 0;
    while (L < R) {
      ll sum = a[L]+a[R];
      if (sum == k) 
        {L++; R--; res++;}
      else if (sum > k)
        R--;
      else
        L++;
    }
    cout << res << endl;
  }
  return 0;
}

/*
3 1 4 1 5 9 2 6 5 3 5 8 9 7 9 3
*/