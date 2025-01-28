#include <bits/stdc++.h>
using namespace std;
void cycle(int n) {
  if (n == 1) { return; }
  cycle(n-1);
  cout << n-1 << endl;
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  cycle(n+1);
  return 0;
}