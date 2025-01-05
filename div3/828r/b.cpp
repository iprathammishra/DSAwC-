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
    long long even = 0; long long odd = 0;
    int EC = 0, OC = 0;
    vector<long long> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; if (a[i] % 2 == 0) { even += a[i]; EC++; } else { odd += a[i]; OC++; }  }
    while (q--) {
      int x, v; cin >> x >> v;
      if (x == 0) {
        if (v % 2 == 0) { even += EC*v; cout << even + odd << endl; }
        else {
          even += EC*v; cout << even + odd << endl;
          OC += EC;
          EC = 0;
        }
      }
      else {
        if (v % 2 == 0) { odd += OC*v;  cout << even + odd << endl; }
        else {
          odd += OC*v ; cout << even + odd << endl;
          EC += OC;
          OC = 0;
        }
      }
    }
  }
  return 0;
}
