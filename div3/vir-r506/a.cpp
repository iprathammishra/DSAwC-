#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  string t; cin >> t;
  vector<int> p(n);
  for (int i = 1; i < (int) t.size(); i++) {
    int j = p[i-1];
    while (j > 0 && t[j] != t[i]) { j = p[j-1]; }
    if (t[i] == t[j]) { j++; }
    p[i] = j;
  }
  int len = (int) t.size() - p[n-1];
  for (int i = 0; i < k - 1; i++) { cout << t.substr(0, len); }
  cout << t << endl;
  return 0;
}