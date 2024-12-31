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
  int a, b, x; cin >> a >> b >> x; 
  int end = -1;
  if (a > b) {
    x--;
    bool go = true;
    while (x--) {
      if (go == true) { go = false; cout << 0; a--; end = 0; } 
      else { go = true; cout << 1; b--; end = 1; }
    }
  }
  else {
    x--;
    bool go = false;
    while (x--) {
      if (go == false) { go = true; cout << 1; b--; end = 1; }
      else { go = false; cout << 0; a--; end = 0; }
    }
  }
  if (end == 1) {
    while (a--) { cout << 0; }
    while (b--) { cout << 1; }
  }
  else {
    while (b--) { cout << 1; }
    while (a--) { cout << 0; }
  }
  return 0;
}