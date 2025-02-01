#include <bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) 
    cin >> a[i];
  sort(begin(a), end(a));
  int k; cin >> k;
  while (k--) {
    int l, r; cin >> l >> r;
    int PL = 0, PR = n-1;
    int res = 0;
    while (PL <= PR) {
      int mid = PL + (PR-PL)/2;
      if (a[mid] >= l && a[mid] <= r) {
        while (a[PL] < l) 
          PL++;
        res += (mid - PL + 1);
        PL = mid+1;
      }
      else {
        if (a[mid] >= l && a[mid] >= r) 
          PR = mid-1;
        else
          PL = mid+1;
      }
    }
    cout << res << " ";
  }
  return 0;
}
