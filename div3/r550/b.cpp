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
  int even = 0, odd = 0;
  long ans = 0;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) { even++; }
    else { odd++; }
  }
  sort(a.begin(), a.end(), [](const int& a, const int& b) -> bool { return a > b; });
  set<int> ix; int prev;
  if (odd > even) {
    for (int i = 0; i < n; i++) { if (a[i] % 2 == 1) { ix.insert(i); prev = 1; break; } }
  } 
  else {
    for (int i = 0; i < n; i++) { if (a[i] % 2 == 0) { ix.insert(i); prev = 2; break; } }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (ix.count(j)) { continue; }
      if (a[j] % 2 == 0 && prev == 1) { ix.insert(j); prev = 2; break; }
      else if (a[j] % 2 == 1 && prev == 2) { ix.insert(j); prev = 1; break; }
    }
  }
  for (int i = 0; i < n; i++) { if (ix.count(i) == 0) { ans += a[i]; } }
  cout << ans << endl;
  return 0;
}