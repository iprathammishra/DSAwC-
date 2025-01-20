#include <bits/stdc++.h>
using namespace std;
vector<int> binary;
bool ok(int n) {
  if (n == 1) { return true; }
  bool ans = false;
  for (int i : binary) {
    if (n % i == 0) {
      ans |= ok(n / i);
    }
  }
  return ans;
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  for (int i = 2; i < 100'007; i++) {
    int curr = i;
    bool bad = false;
    while (curr) {
      if (curr % 10 > 1) { bad = true; break; }
      curr /= 10;
    }
    if (!bad) { binary.push_back(i); }
  }
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    cout << (ok(n) ? "YES\n" : "NO\n");
  }
  return 0;
}
