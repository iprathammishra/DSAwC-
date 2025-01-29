#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    vector<int> cnt(n+1, 0), mx(n+1, 0);
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; if (a[i] <= n) cnt[a[i]]++; }
    for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j += i) {
        mx[j] += cnt[i];
      }
    }
    cout << *max_element(begin(mx), end(mx)) << endl;
    
  }
  return 0;
}