#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    long long sum = 0;
    int nega = 0;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; if (a[i] < 0) { nega++; a[i] = -a[i]; } sum += a[i]; }
    sort(begin(a), end(a));
    if (nega & 1) { sum -= 2*a[0]; }
    cout << sum << endl; 
  }
  return 0;
}