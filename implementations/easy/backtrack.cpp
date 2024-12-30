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
void func(int i, string& s, int& ans) {
  if (i == (int) s.size()) {
    if (s[0] == 'a' || s[0] == 'e' || s[0] == 'o' || s[0] == 'i' || s[0] == 'u') { ans++; }
  }
  for (int j = i; j < (int) s.size(); j++) {
    swap(s[i], s[j]);
    func(i+1, s, ans);
    swap(s[i], s[j]);
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  string s; cin >> s;
  int n = (int) s.size();
  int ans = 0;
  func(0, s, ans);
  cout << ans << endl;
  return 0;
}