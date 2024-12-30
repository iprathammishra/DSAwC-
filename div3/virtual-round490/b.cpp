#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  string s; cin >> s;
  vector<int> d;
  for (int i = 1; i <= n; i++) { if (n % i == 0) { d.push_back(i); } }
  for (int& it : d) {
    reverse(s.begin(), s.begin()+it);
  }
  cout << s << endl;
  return 0;
}