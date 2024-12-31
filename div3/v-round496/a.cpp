#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  vector<int> ans;
  
  int prev = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 1 && prev == 0) {
      prev = a[i];
    }
    else if (a[i] == 1) {
      ans.push_back(prev);
    }
    prev = a[i];
  }
  ans.push_back(prev);

  cout << (int) ans.size() << endl;
  for (int& it : ans) { cout << it << " "; }
  cout << endl; 
  return 0;
}