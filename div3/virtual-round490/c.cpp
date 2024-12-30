#include <bits/stdc++.h>
using namespace std;

const string ALPHA = "abcdefghijklmnopqrstuvwxyz";
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  string s; cin >> s;
  vector<int> freq(26, 0);
  for (char& it : s) {
    freq[it - 'a']++;
  }
  vector<int> process(26, 0);
  auto solve = [&]() -> void {
    for (int i = 0; i < 26; i++) {
      if (freq[ALPHA[i] - 'a'] != 0) {
        freq[ALPHA[i] - 'a']--;
        process[ALPHA[i] - 'a']++;
        break;
      }
    }
  };
  while (k--) {
    solve();
  }
  for (char& it : s) {
    if (process[it - 'a'] > 0) { process[it - 'a']--; continue; }
    else { cout << it; }
  }
  cout << endl;
  return 0;
}