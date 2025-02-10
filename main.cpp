#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  int n; cin >> n;
  set<pair<string, string>> S;
  while (n--) {
    pair<string, string> p;
    cin >> p.first >> p.second;
    S.insert(p);
  }
  cout << (int)S.size() << endl;
  return 0;
}