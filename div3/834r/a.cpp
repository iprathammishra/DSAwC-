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
    vector<string> container;
    string ss = "";
    for (char& ch : s) {
      ss.push_back(ch);
      if (ch == 's') {
        container.push_back(ss);
        ss = "";
      }
    }

    vector<string> possible = {"Y", "e", "s", "Ye", "es", "Yes"};
    auto check = [&](string& S) -> bool {
      return find(possible.begin(), possible.end(), S) != possible.end();
    };
    auto pro = [](char& c1, char& c2) -> bool {
      if (
        (c1 == 'Y' && c2 == 'Y') ||
        (c1 == 'e' && c2 == 's') ||
        (c1 == 's' && c2 == 'Y')   
      ) { return true; }
      return false;
    };
    if (ss != "") { container.push_back(ss); } 
    int n = (int) container.size();
    if (n == 0) { cout << "NO" << endl; }
    else if (n == 1) {
      if (check(container[0])) { cout << "YES" << endl; }
      else { cout << "NO" << endl; }
    }
    else {
      bool go = true;
      for (int i = 0; i+1 < n; i++) {
        if (!check(container[i]) || !check(container[i+1])) { cout << "NO" << endl; go = false; break; }
        else {
          char last = container[i].back();
          char first = container[i+1][0];
          if (!pro(last, first)) { cout << "NO" << endl; go = false; break; }
        } 
      }
      if (go) { cout << "YES" << endl; }
    }

  }
  return 0;
}