#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    map<long, pair<int, int>> mp;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      if (!mp.count(x)) {
        mp[x].first = i; mp[x].second = i;
      } else { mp[x].second = i; } 
    }
    while (k--) {
      long q1, q2; cin >> q1 >> q2;
      if (!mp.count(q1) || !mp.count(q2) || mp[q1].first > mp[q2].second) { cout << "NO" << endl; }
      else { cout << "YES" << endl; }
    }
    
  }
  return 0;
}