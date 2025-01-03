#include <bits/stdc++.h>
using namespace std;

const string ALPHA = "abcdefghijklmnopqrstuvwxyz";
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  while (n--) {
    string s; cin >> s; sort(s.begin(), s.end());
    if (ALPHA.find(s) == string::npos) { cout << "No" << endl; }
    else { cout << "Yes" << endl; }
  }
  return 0;
}