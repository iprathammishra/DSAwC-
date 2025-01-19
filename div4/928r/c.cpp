#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  auto count = [](string s) -> long long {
    long long c = 0;
    for (char& ch : s) {
      c += ch - '0';
    }
    return c;
  };
  vector<long long> res; res.push_back(1);
  for (int i = 2; i <= 200000; i++) {
    res.push_back(res.back()+count(to_string(i)));
  }

  while (t--) {
    int n; cin >> n;
    cout << res[n-1] << endl;
  }
  return 0;
}
