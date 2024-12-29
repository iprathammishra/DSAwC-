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
    vector<string> stk;
    int n = (int) s.size();
    for (int i = 0; i < n; i++) { stk.push_back(string(1, s[i])); }
    int i; vector<string> temp;
    
    n = (int) stk.size(); i = 0; temp = {};
    while (i < n) {
      if (stk[i] == "*" || stk[i] == "/") {
        int val = stoi(temp.back());
        temp.pop_back();
        if (stk[i] == "*") { temp.push_back(to_string(val * stoi(stk[i+1]))); }
        else { temp.push_back(to_string(val / stoi(stk[i+1]))); }
        i++;
      } else { temp.push_back(stk[i]); }
      i++;
    }
    stk = temp;

    n = (int) stk.size(); i = 0; temp = {};
    while (i < n) {
      if (stk[i] == "+" || stk[i] == "-") {
        int val = stoi(temp.back());
        temp.pop_back();
        if (stk[i] == "+") { temp.push_back(to_string(val + stoi(stk[i+1]))); }
        else { temp.push_back(to_string(val - stoi(stk[i+1]))); }
        i++;
      } else { temp.push_back(stk[i]); }
      i++;
    }

    cout << temp[0] << endl;
  }

  return 0;
}
