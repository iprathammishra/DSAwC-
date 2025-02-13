#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);
template <typename T> void dbg(const T& x) { cerr << x; }
template <typename T, typename U> void dbg(const pair<T, U>& p) { cerr << "(" << p.first << ", " << p.second << ")"; }
template <typename T> void dbg(const vector<T>& v) { cerr << "["; for (size_t i = 0; i < v.size(); ++i) dbg(v[i]), cerr << (i + 1 < v.size() ? ", " : ""); cerr << "]"; }
template <typename T> void dbg(const vector<vector<T>>& v) { cerr << "["; for (size_t i = 0; i < v.size(); ++i) dbg(v[i]), cerr << (i + 1 < v.size() ? ", " : ""); cerr << "]"; }
template <typename T> void dbg(const set<T>& s) { cerr << "{"; for (auto it = s.begin(); it != s.end(); ++it) dbg(*it), cerr << (next(it) != s.end() ? ", " : ""); cerr << "}"; }
template <typename K, typename V> void dbg(const map<K, V>& m) { cerr << "{"; for (auto it = m.begin(); it != m.end(); ++it) dbg(*it), cerr << (next(it) != m.end() ? ", " : ""); cerr << "}"; }
template <typename T, typename... Args> void dbg(const T& arg, const Args&... args) { dbg(arg); if (sizeof...(args)) cerr << " | ", dbg(args...); }
#define bug(...) { cerr << "Line " << __LINE__ << ": "; dbg(__VA_ARGS__); cerr << endl; }
signed main() {
  PRATHAM
  int N, M, Q; cin >> N >> M >> Q;
  vector<vector<int>> pref2d(N+1, vector<int>(M+1, 0));
  vector<vector<int>> rectangle(N, vector<int>(M, 0));
  int count = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> rectangle[i][j];
    }
  }
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= M; j++) {
      pref2d[i][j] = rectangle[i-1][j-1] + pref2d[i][j-1] + pref2d[i-1][j] - pref2d[i-1][j-1];
    }
  }
  while (Q--) {
    int from_row, from_col, to_row, to_col;
    cin >> from_row >> from_col >> to_row >> to_col;
    cout << pref2d[to_row][to_col] - pref2d[to_row][from_col-1] - pref2d[from_row-1][to_col] + pref2d[from_row-1][from_col-1] << endl;
  }
  return 0;
}
