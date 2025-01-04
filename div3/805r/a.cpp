#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n;  cin >> n;
  while (n--) {
    string s; cin >> s;
    int m = (int) s.size();
    if (m == 1) { cout << stoi(s) - 1 << endl; }
    else {
      int t = 1;
      for (int i = 0; i < m-1; i++) { t*= 10; }
      int ans = stoi(s) - t;
      cout << ans << endl;
    }
  }
  return 0;
}