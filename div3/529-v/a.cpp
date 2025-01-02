#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  string s; cin >> s;
  string t = "";
  int j = 1; int i = 0;
  while (i < n) {
    int k = 0;
    while (k < j) { if (k == 0) { t.push_back(s[i]); } i++; k++; }
    j++;
  }
  cout << t << endl;

  return 0;
}