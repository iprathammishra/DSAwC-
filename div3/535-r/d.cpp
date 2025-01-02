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
const string S = "RGB";
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  string s; cin >> s;
  int count = 0;
  for (int i = 1; i+1 < n; i++) {
    if (s[i] == s[i-1]) {
      string a = ""; a.push_back(s[i-1]); a.push_back(s[i]); a.push_back(s[i+1]);
      for (int j = 0; j < 3; j++) {
        if (a.find(string(1, S[j])) == string::npos) { s[i] = S[j]; count++; break; }
      }
    }
  }
  if (s[n-1] == s[n-2]) {
    count++;
    if (s[n-2] == 'R') { s[n-1] = 'G'; }
    else if (s[n-2] == 'B') { s[n-1] = 'G'; }
    else { s[n-1] = 'R'; }
  }
  cout << count << endl;
  cout << s << endl;
  return 0;
}