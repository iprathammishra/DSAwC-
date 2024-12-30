#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  unordered_set<int> s(a.begin(), a.end());
  if ((int) s.size() < k) { cout << "NO" << endl; }
  else {
    cout << "YES" << endl;
    for (auto& it : s) {
      if (k == 0) { cout << endl; break;}
      cout << find(a.begin(), a.end(), it) - a.begin() + 1 << " ";
      k--; 
    }
  }
  return 0;
}