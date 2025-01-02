#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  long long n; cin >> n;
  if ((n*(n+1))/2 % 2 == 0) cout << 0 << endl;
  else cout << 1 << endl;
  return 0;
}