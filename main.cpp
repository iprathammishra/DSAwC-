#include <bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  while (k--) {
    int q; cin >> q;
    int L = 0, R = n-1;
    bool found = 0;
    while (L <= R) {
      int mid = L + (R-L)/2;
      if (a[mid] == q) {
        found = 1;
        break;
      }
      if (a[mid] < q) 
        L = mid+1;
      else
        R = mid-1;
    }
    found == 1 ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}