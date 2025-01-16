#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    long long sum = 0;
    vector<long long> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; sum += a[i]; }
    auto check = [](long long num) -> bool {
      if (num >= 0) {
        long long sq = sqrt(num);
        return (sq*sq == num);
      }
      return false;
    };
    if (check(sum)) { cout << "YES" << endl; }
    else { cout << "NO" << endl;}
  }
  return 0;
}
