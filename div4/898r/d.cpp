#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int high = 0;
    int res = 0;
    while (high < n) {
      if (s[high] == 'B') {
        high += k;
        res++;
      }
      else { high++; }
    }
    cout << res << endl; 
  }
  return 0;
}