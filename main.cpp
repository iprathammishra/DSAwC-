#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  unordered_map<int, int> mmap;
  int L = 0, R = 0;
  long long res = 0;
  while (R < n) {
    mmap[a[R]]++;
    while ((int) mmap.size() > k) {
      mmap[a[L]]--;
      if (mmap[a[L]] == 0) 
        mmap.erase(a[L]);
      L++;
    }
    res += (R-L+1);
    R++;
  }
  cout << res << endl;
  return 0;
}
