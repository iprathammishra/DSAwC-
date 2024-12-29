#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  while (k--) {
    if (n % 10 == 0) { n /= 10; }
    else { n -= 1; }
  }
  cout << n << endl;
  return 0;
}