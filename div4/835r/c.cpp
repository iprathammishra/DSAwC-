#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    vector<int> b = a;
    sort(begin(b), end(b));    
    for (int i = 0; i < n; i++) {
      if (a[i] == b[n-1]) { cout << a[i] - b[n-2] << " "; }
      else { cout << a[i] - b[n-1] << " "; }
    }
    cout << endl;
  }
  return 0;
}