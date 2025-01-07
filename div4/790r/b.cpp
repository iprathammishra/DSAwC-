#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    int X = *min_element(begin(a), end(a));
    long long res = 0;
    for (int& i : a) { res += (i - X); }
    cout << res << endl;
  }
  return 0;
}