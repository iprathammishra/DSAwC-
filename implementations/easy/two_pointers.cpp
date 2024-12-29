#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  int low = 0, high = 0;

  int ans = 0, running = 0;
  while (high < n) {
    running += a[high];
    if (running > k) {
      ans = max(ans, high - low + 1);
      running -= a[low];
      low++;
    }
    high++;
  } 

  cout << ans << endl;

  return 0;
}
