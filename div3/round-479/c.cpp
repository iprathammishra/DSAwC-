#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<long> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  sort(a.begin(), a.end());
  
  if (k > n) { cout << -1 << endl; } 
  else if (k == 0 && a[0] != 1 ) { cout << 1 << endl;}
  else if (k == n) { cout << 1000000000 << endl; }
  else if (k == 0 || a[k] == a[k-1]) { cout << -1 << endl; }
  else { cout << a[k-1] << endl; }
  return 0;
}