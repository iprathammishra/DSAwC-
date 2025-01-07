#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    set<int> s(begin(a), end(a));
    int m = (int) s.size();
    if (m % 2 == 0 && n % 2 == 0) { cout << m << endl; }
    else if (m % 2 == 1 && n % 2 == 1) { cout << m << endl; }
    else { cout << m-1 << endl; }
  }
  return 0;
}
