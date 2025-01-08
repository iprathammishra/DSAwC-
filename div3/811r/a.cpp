#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n, H, M; cin >> n >> H >> M;
    set<pair<int, int>> s;
    while (n--) {
      int h, m; cin >> h >> m;
      s.insert({h, m});
    }
    int nH = 0, nM = 0;
    while (true) {
      if (s.count({H, M})) { cout << nH << " " << nM << endl; break; }
      M++; nM++;
      if (M == 60) { H++; if (H == 24) { H = 0; } M = 0; }
      if (nM == 60) {nH++; nM = 0; }
    }
  }
  return 0;
}
