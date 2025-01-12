#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    int count = 0;

    int i = 0;
    while (i < n) {
      if (i == 0 || a[i-1] > a[i]) {
        int val = a[i];
        while (i < n && a[i] == val) { i++; }
        if (i == n) { count++; }
        else if (a[i] > val) { count++; }
      }
      else { i++; }
    }

    if (count == 1) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
  }
  return 0;
}