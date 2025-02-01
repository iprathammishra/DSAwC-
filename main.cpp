#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  ll w, h, n; cin >> w >> h >> n;
  ll low = max(w, h);
  ll high = low;
  while ((high / w) * (high / h) < n) 
    high *= 2;
  ll ans = high;
  while (low <= high) {
    ll mid = low + (high-low)/2;
    if ((mid/w) * (mid/h) >= n) {
      ans = mid;
      high = mid-1;
    }
    else 
      low = mid+1;
  }
  cout << ans << endl;
  return 0;
}