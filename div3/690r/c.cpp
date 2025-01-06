#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int last = 9;
    int sum = 0;
    vector<int> ans;
    while (sum < n && last > 0) {
      ans.push_back(min(n - sum, last));
      sum += last;
      last--;
    }
    if (sum < n) { cout << -1 << endl; }
    else {
      reverse(begin(ans), end(ans));
      for (int& i : ans) { cout << i; }
      cout << endl;
    }
  }
  return 0;
}