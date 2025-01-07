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
    string s; cin >> s;
    int n; cin >> n;
    auto process = [](const pair<string, string> &p) -> string {
      return p.first + p.second;
    };
    auto check = [](const string& s) -> bool {
      string t = s; reverse(begin(t), end(t));
      return s == t;
    };
    auto de_process = [](const string& st) -> pair<string, string> {
      pair<string, string> x;
      x.first = st.substr(0, 2); x.second = st.substr(3, 6);
      return x;
    };
    auto _de_process = [](const string& st) -> pair<string, string> {
      pair<string, string> x;
      x.first = st.substr(0, 2); x.second = st.substr(2, 5);
      return x;
    };
    set<string> se;
    int H = n/60, M = n - H*60;
    pair<string, string> X = de_process(s);
    string time = process(X);
    int res = 0;
    while (!se.count(time)) {
      se.insert(time);
      res += check(time);
      X = _de_process(time);
      int second = stoi(X.second) + M;
      int ex = 0;
      if (second >= 60) { ex = 1; second %= 60; }
      int first = (stoi(X.first) + H + ex) % 24; 
      // TRACE(first, second);
      if (first < 10) { X.first = "0" + to_string(first); }
      else if (first >= 10) { X.first = to_string(first); }
      if (second < 10) { X.second = "0" + to_string(second); }
      else if (second >= 10) { X.second = to_string(second); }
      time = process(X);
    }
    cout << res << endl; 
  }
  return 0;
}