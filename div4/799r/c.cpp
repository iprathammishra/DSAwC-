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
    vector<vector<char>> G(8, vector<char>(8, 0));
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        cin >> G[i][j];
      }
    }
    pair<int, int> res = {-1, -1};
    for (int i = 1; i < 7; i++) {
      bool go = true;
      for (int j = 1; j < 7; j++) {
        if (G[i][j] == '#') {
          if (G[i-1][j-1] == '#' &&
              G[i-1][j+1] == '#' &&
              G[i+1][j-1] == '#' &&
              G[i+1][j+1] == '#') { go = false; res = {i+1, j+1}; break; }
        }
      }
      if (go == false) { break; }
    }
    cout << res.first << " " << res.second << endl;
  }
  return 0;
}