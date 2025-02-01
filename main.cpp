#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  ll n, k; cin >> n >> k;
  double low = 0;
  double high = 0;
  vector<double> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    high = max(high, a[i]);
  }
  auto f = [&](double mid) ->bool {
    int count = 0;
    for (auto& i : a) 
      count += (int) (i/mid);
    return count >= k;
  };
  while (high - low > 1e-6) {
    double mid = low + (high-low)/2.0;
    if (f(mid))
      low = mid;
    else
      high = mid;
  }
  cout << fixed << setprecision(6) << low; 
  return 0;
}