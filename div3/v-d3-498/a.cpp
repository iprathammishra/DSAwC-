#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr); 
  int n; cin >> n;
  vector<long> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  vector<long> ans;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) { ans.push_back(a[i]-1); }
    else { ans.push_back(a[i]); }
  }
  for (auto& it : ans) { cout << it << " "; }
  cout << endl; 
  return 0;
}