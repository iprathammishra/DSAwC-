#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  int n; cin >> n;
  vector<int> a(n);
  for (auto& i : a)
    cin >> i;
  int res = 0;
  for (int i = 0; i+1 < n; i++) {
    if (a[i] > a[i+1])
      {res += abs(a[i] - a[i+1]); a[i+1] = a[i];}
  }
  cout << res << endl;
  return 0;
}