#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    int mx = *min_element(begin(a), end(a));
    long long res = 1;
    bool found = false;
    for (int i = 0; i < n; i++) {
      if (a[i] == mx && found == false) { res *= (mx+1); found = true; }
      else { res *= a[i]; }
    }
    cout << res << endl; 
  }
  return 0;
}