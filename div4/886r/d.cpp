#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    int low = 0; int high = 0;
    sort(begin(a), end(a));
    int res = 1;
    int running = 1;
    for (int i = 1; i < n; i++) {
      if (a[i] - a[i-1] > k) {
        running = 1;
      }
      else { running++; }
      res = max(res, running);
    }
    cout << n - res << endl;
  }
  return 0;
}
