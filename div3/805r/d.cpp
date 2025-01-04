#include <bits/stdc++.h>
using namespace std;
template <typename T> void dbg(const T& x) { cerr << x; }
template <typename T, typename U> void dbg(const pair<T, U>& p) { cerr << "(" << p.first << ", " << p.second << ")"; }
template <typename T> void dbg(const vector<T>& v) { cerr << "["; for (size_t i = 0; i < v.size(); ++i) dbg(v[i]), cerr << (i + 1 < v.size() ? ", " : ""); cerr << "]"; }
template <typename T> void dbg(const vector<vector<T>>& v) { cerr << "["; for (size_t i = 0; i < v.size(); ++i) dbg(v[i]), cerr << (i + 1 < v.size() ? ", " : ""); cerr << "]"; }
template <typename T> void dbg(const set<T>& s) { cerr << "{"; for (auto it = s.begin(); it != s.end(); ++it) dbg(*it), cerr << (next(it) != s.end() ? ", " : ""); cerr << "}"; }
template <typename K, typename V> void dbg(const map<K, V>& m) { cerr << "{"; for (auto it = m.begin(); it != m.end(); ++it) dbg(*it), cerr << (next(it) != m.end() ? ", " : ""); cerr << "}"; }
template <typename T, typename... Args> void dbg(const T& arg, const Args&... args) { dbg(arg); if (sizeof...(args)) cerr << " | ", dbg(args...); }
#define TRACE(args...) { cerr << "Line " << __LINE__ << ": "; dbg(args); cerr << endl; }
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int p; cin >> p;
    int sum = 0;
    for (char& ch : s) { sum += (ch - 'a' + 1); }
    if (sum <= p) { cout << s << endl; }
    else {
      vector<pair<char, int>> letters;
      for (int i = 0; i < s.size(); i++)
          letters.emplace_back(s[i], i);
      sort(letters.begin(), letters.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
          return a.first > b.first; 
      });
      unordered_set<int> removed_indices;
      for (auto& letter : letters) {
          sum -= (letter.first - 'a' + 1);
          removed_indices.insert(letter.second);
          if (sum <= p) break;
      }
      string ans = "";
      for (int i = 0; i < s.size(); i++) {
          if (removed_indices.find(i) == removed_indices.end())
              ans.push_back(s[i]);
      }
      cout << ans << endl;
    }
  }
  return 0;
}