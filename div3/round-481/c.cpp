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
  int n, m; cin >> n >> m;
  vector<long long> a(n), b(m);
  for (int i = 0; i < n; i++) { cin >> a[i]; }
  for (int i = 0; i < m; i++) { cin >> b[i]; }
  
  vector<long long> prefix;
  prefix.push_back(a[0]);
  for (int i = 1; i < n; i++) { prefix.push_back(prefix.back() + a[i]); }
  int bar = 0;
  // TRACE(prefix);
  for (int i = 0; i < m; i++) {
    if (b[i] <= prefix[bar] && bar == 0) {
      cout << bar+1 << " " << b[i] << endl;
    }
    else {
      if (b[i] > prefix[bar]) {
        while (prefix[bar] < b[i]) { bar++; }
      }
      cout << bar+1 << " " << b[i] - prefix[bar-1] << endl;
    }

  }
  return 0;
}
