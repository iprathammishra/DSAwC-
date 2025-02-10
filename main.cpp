#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  int n; cin >> n;
  vector<int> a(n);
  multiset<int> S;
  for (auto& i : a) {
    cin >> i;
    auto it = S.upper_bound(i);
    if (it != end(S))
      S.erase(it);
    S.insert(i);
  }
  cout << (int)S.size() << endl;
  return 0;
}

/*
1,8 +1
2,5 +1
4,5
2,2
3,1
*/