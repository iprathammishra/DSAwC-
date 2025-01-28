#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  vector<long long> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  int p1 = 0, p2 = n-1;
  bool ok = true;
  while (p1 < p2) {
    if (a[p1] != a[p2]) { ok = false; break; }
    p1++; p2--;
  }
  if (ok == false) { cout << "NO" << endl; }
  else { cout << "YES" << endl; }
  return 0;
}