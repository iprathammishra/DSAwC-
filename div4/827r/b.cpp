#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    sort(begin(a), end(a));
    bool go = true;
    for (int i = 0; i+1 < n; i++) {
      if (a[i] >= a[i+1]) { go = false; break; }
    }
    if (go) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
  }
  return 0;
}