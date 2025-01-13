#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int M = 0, B = 0;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; if (a[i] & 1) { B += a[i]; } else { M += a[i]; } }
    if (M > B) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }

  }
  return 0;
}