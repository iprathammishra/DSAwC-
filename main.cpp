#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  ll n, k; cin >> n >> k;
  vector<ll> a(n); 
  for (int i = 0; i < n; i++)
    cin >> a[i];
  deque<ll> maxD, minD;
  ll L = 0, R = 0;
  ll ans = 0;
  while (R < n) {
    while (!maxD.empty() && a[maxD.back()] <= a[R])
      maxD.pop_back();
    maxD.push_back(R);
    while (!minD.empty() && a[minD.back()] >= a[R])
      minD.pop_back();
    minD.push_back(R);
    while (a[maxD.front()] - a[minD.front()] > k) {
      if (maxD.front() == L) maxD.pop_front();
      if (minD.front() == L) minD.pop_front();
      L++;
    }
    ans += (R - L + 1);
    R++;
  }
  cout << ans << endl;
  return 0;
}