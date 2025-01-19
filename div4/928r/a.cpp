#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    map<char, int> m;
    for (char& ch : s) { m[ch]++; }
    if (m['A'] > m['B']) { cout << 'A' << endl; }
    else { cout << 'B' << endl; }
  }
  return 0;
}