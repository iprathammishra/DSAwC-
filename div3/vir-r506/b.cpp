#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j+1 < n && a[j+1] <= a[j]*2) { j++; }
    ans = max(ans, j - i + 1);
    i = j;
  }

  cout << ans << endl;
  return 0;
}