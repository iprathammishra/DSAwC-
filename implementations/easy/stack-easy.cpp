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
    int n; cin >> n;
    string s; cin >> s;
    vector<string> stk;

    int ans = 0;
    n = (int) s.size(); int i = 0;
    while (i < n) {
      if (isdigit(s[i])) {
        string ts = "";
        while (isdigit(s[i])) { ts.push_back(s[i]); i++; }
        stk.push_back(ts);
      }
      else if (s[i] == '/' || s[i] == '*') {
        int num = stoi(stk.back());
        stk.pop_back();
        if (s[i] == '/') { stk.push_back(to_string(num / stoi(string(1, s[i+1])))); }
        else { stk.push_back(to_string(num * stoi(string(1, s[i+1])))); }
        i++;
      } else { stk.push_back(string(1, s[i])); } i++;

      ans = max(ans, (int) stk.size());
    }

    cout << ans << endl;
  }

  return 0;
}
