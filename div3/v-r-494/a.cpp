#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  map<int, int> mp; 
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; mp[a[i]]++; }
  int ans = 0;
  for (auto& p : mp) {
    ans = max(ans, p.second);
  }
  cout << ans << endl;
  return 0;
}