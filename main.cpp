#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  ll n, x, y; cin >> n >> x >> y;
  if (n == 1) 
    cout << min(x, y) << endl;
  else {
    ll low = 0, high = n * min(x, y);
    while (low <= high) {
      ll mid = low + (high - low)/2;
      if (((mid/x) + (mid/y)) < n-1)
        low = mid+1;
      else  
        high = mid-1;
    }
    cout << low + min(x, y) << endl;
  }
  return 0;
}