#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; } 
    vector<int> ans;
    int low = 0; int high = n-1;
    while (low < high) {
      ans.push_back(a[low]);
      ans.push_back(a[high]);
      low++;
      high--;
    }
    for (int& i : ans) { cout << i << " "; }
    if (n % 2 == 1) { cout << a[n/2]; }
    cout << endl;
  }
  return 0;
}