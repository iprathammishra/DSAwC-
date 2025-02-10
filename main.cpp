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
  int mx = a[0], res = a[0];
  for (int i = 1; i < n; i++) {
    mx = max(a[i], mx+a[i]);
    res = max(res, mx);
  }
  cout << res << endl;
  return 0;
}

/*
-1 2 0 5 8 3 5 7
*/