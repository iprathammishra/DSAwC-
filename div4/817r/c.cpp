#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    map<string, int> m;
    vector<vector<string>> v;
    for (int i = 0; i < 3; i++) {
      vector<string> vv;
      for (int j = 0; j < n; j++) {
        string s; cin >> s;
        vv.push_back(s);
        m[s]++;
      }
      v.push_back(vv);
    }
    for (auto& i : v) {
      int count = 0;
      for (string& st : i) {
        if (m[st] == 1) { count += 3; }
        else if (m[st] == 2) { count++; }
      }
      cout << count << " ";
    }
    cout << endl;
  }
  return 0;
}