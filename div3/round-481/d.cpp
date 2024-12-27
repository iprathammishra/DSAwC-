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
  int n; cin >> n;
  vector<int> b(n); for (int i = 0; i < n; i++) { cin >> b[i]; }
  auto solve = [&](vector<int>& vec, int diff) {
    int op = 0;
    for (int i = 2; i < n; i++) {
      bool flag = false;
      for (int j = -1; j <= 1; j++) {
        if (vec[i] + j - vec[i-1] == diff) {
          flag = true;
          vec[i] += j;
          if (j != 0) { op++; }
        }
      }
      if (flag == false) { return -1; }
    }
    return op;
  };
  
  int ans = INT_MAX;
  for (int i = -1; i <= 1; i++) {
    for (int j = -1; j <= 1; j++) {
      vector<int> _b = b;
      _b[0] += i; _b[1] += j;
      int val = solve(_b, _b[1] - _b[0]);
      if (val != -1) {
        if (i != 0) { val++; }
        if (j != 0) { val++; }
        ans = min(ans, val);
      }
    }
  }
  // TRACE(ans);
  if (ans != INT_MAX) { cout << ans << endl; }
  else { cout << -1 << endl; }
  return 0;
}

