#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, x, y; cin >> n >> x >> y;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int xx; cin >> xx;
    if (xx <= x) { cnt++; }
  } 
  if (x > y) { cout << n << endl; }
  else { cout << (cnt + 1)/2 << endl; }
  return 0;
}