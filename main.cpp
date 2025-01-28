#include <bits/stdc++.h>
using namespace std;
void cycle(long long x, long long n, bool& res) {
  if (x == n) { res = true; return; }
  if (x > n) { res = res || false; return; }
  cycle(x*10 * 1LL, n, res); cycle (x*20 * 1LL, n, res);
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    long long n; cin >> n;
    bool res = false;
    cycle(1LL, n, res);
    res ? cout << "YES\n" : cout << "NO\n";
  } 
  return 0;
}