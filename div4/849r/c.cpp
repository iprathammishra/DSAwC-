#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    int low = 0; int high = n-1;
    int res = 0;
    while (low <= high) {
      if (s[low] != s[high]) { low++; high--; }
      else { res = high - low + 1; break; }
    }
    cout << res << endl; 
  }
  return 0;
}