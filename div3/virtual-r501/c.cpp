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
  long n, m; cin >> n >> m;
  long long sum1 = 0;
  vector<pair<long, long>> a(n); for (int i = 0; i < n; i++) { cin >> a[i].first >> a[i].second; sum1 += a[i].first; }
  sort(a.begin(), a.end(), [](const pair<long long, long long>& a, const pair<long long, long long>& b) -> bool { return a.first - a.second > b.first - b.second; });
  for (int i = 0; i < n; i++) {
    if (sum1 <= m) { cout << i << endl; return 0; }
    sum1 -= a[i].first - a[i].second;
  }
  if (sum1 <= m) { cout << n << endl; }
  else { cout << -1 << endl; }
  return 0;
}