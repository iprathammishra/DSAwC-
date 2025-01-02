#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  auto solve = [](int& x, vector<int> v) -> int {
    v.erase(find(v.begin(), v.end(), x));
    return *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
  };
  int mx = *max_element(a.begin(), a.end());
  int mn = *min_element(a.begin(), a.end());
  cout << min(solve(mx, a), solve(mn, a)) << endl;
  return 0;
}