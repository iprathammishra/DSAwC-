#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  string a, b; cin >> a >> b;
  int ans = 0;
  int n = (int) a.size() - 1, m = (int) b.size() - 1;
  bool flag = false;
  while (n >= 0 && m >= 0) {
    if (a[n] == b[m]) { n--; m--;}
    else {
      ans += n+1;
      ans += m+1;
      flag = true;
      break;
    } 
  }
  if (flag == false) {
    if (m >= 0) { ans += m+1; }
    if (n >= 0) { ans += n+1; }
  }
  cout << ans << endl;
  return 0;
}