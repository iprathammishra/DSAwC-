#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] <= k) { a[i] = k+1; ans++; }
    else { break; }
  }
  for (int i = n-1; i >= 0; i--) {
    if (a[i] <= k) { a[i] = k+1; ans++; }
    else { break; }
  }
  
  cout << ans << endl;
  return 0;
}