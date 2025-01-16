#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  auto flag = [](string s) -> bool {
    for (auto ch : s) {
      if (ch == '?') { return true; }
    }
    return false;
  };
  auto miss = [](string s) -> char {
    bool A = false, B = false, C = false;
    for (char& ch : s) {
      if (ch == 'A') { A = true; }
      else if (ch == 'B') { B = true; }
      else if (ch == 'C') { C = true; }
    }
    if (A == false) { return 'A'; }
    else if (B == false) { return 'B'; }
    else if (C == false) { return 'C'; }
    return '.';
  };
  while (t--) {
    string one; cin >> one;
    string two; cin >> two;
    string three; cin >> three;
    if (flag(one)) { cout << miss(one) << endl; }
    else if (flag(two)) { cout << miss(two) << endl; }
    else if (flag(three)) { cout << miss(three) << endl; }
  }
  return 0;
}
