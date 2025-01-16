#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    auto vow = [](char ch) -> bool {
      if (ch == 'a' || ch == 'e') { return true; }
      return false;
    };
    int high = n-1;
    vector<string> container;
    while (high >= 0) {
      string t = "";
      if (vow(s[high])) {
        t.push_back(s[high-1]); t.push_back(s[high]);
        high -= 2;
      }
      else {
        t.push_back(s[high-2]);
        t.push_back(s[high-1]); t.push_back(s[high]);
        high -= 3;
      }
      container.push_back(t);
    }
    reverse(begin(container), end(container));
    int m = (int) container.size();
    for (int i = 0; i < m; i++) {
      if (i == m-1) { cout << container[i]; }
      else cout << container[i] << ".";
    }
    cout << endl;
  }
  return 0;
}
