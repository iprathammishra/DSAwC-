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
  int k; cin >> k;
  vector<pair<int, pair<int, int>>> seq;
  int bar = 1;
  while (k--) {
    int n; cin >> n;
    int sum = 0;
    vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; sum += a[i]; }
    for (int i = 0; i < n; i++) { seq.push_back({sum - a[i], {bar, i+1}}); }
    bar++;
  }
  sort(seq.begin(), seq.end());
  int n = (int) seq.size();
  bool flag = false;
  for (int i = 0; i < n-1; i++) {
    if (seq[i].first == seq[i+1].first && seq[i].second.first != seq[i+1].second.first) {
      cout << "YES" << endl;
      cout << seq[i].second.first << " " << seq[i].second.second << endl;
      cout << seq[i+1].second.first << " " << seq[i+1].second.second << endl;
      flag = true;
      break;
    }
  }
  if (flag == false) { cout << "NO" << endl; }
  return 0;
}