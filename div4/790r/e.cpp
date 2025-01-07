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
    int n, q; cin >> n >> q;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
    vector<pair<long long, int>> b(q); for (int i = 0; i < q; i++) { int x; cin >> x; b[i] = {x, i}; }
    sort(begin(a), end(a), [](const int& a, const int& b) -> bool { return a > b; }); 
    sort(begin(b), end(b));
    // TRACE(a, b);
    vector<long long> p(n); p[0] = a[0];
    for (int i = 1; i < n; i++) { p[i] = p[i-1]+a[i]; }
    // TRACE(p, b)
    map<int, int> m;
    int running_idx = 0;
    for (int i = 0; i < q; i++) {
      long long sum = b[i].first;
      int idx = b[i].second;
      int start = running_idx;
      while (running_idx < n && p[running_idx] < sum) { running_idx++; }
      if (running_idx < n) m[idx] = running_idx+1;
      else m[idx] = -1;
    }
    for (auto& p : m) {
      cout << p.second << endl;
    }
  }
  return 0;
}