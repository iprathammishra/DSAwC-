#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    int low = 0; int high = n - 1;

    int ans = -1;
    while (low <= high) {
      int mid = (low + high)/2;
      if (a[mid] == k) { ans = mid; break; }
      if (a[mid] > k) {
        if (a[low] < k && k > a[mid]) { high = mid - 1; }
        else { low = mid + 1; }
      } 
      else {
        if (a[mid] < k && a[high]) { low = mid + 1; }
        else { high = mid - 1; } 
      }
    }
  
    cout << ans << endl;
  }
  return 0;
}