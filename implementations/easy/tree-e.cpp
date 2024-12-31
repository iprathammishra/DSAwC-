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
struct LinkedNode { int val; LinkedNode* next; };
struct TreeNode { int val; TreeNode* left; TreeNode* right; };
void func(TreeNode* node, int& ans) {
  if (node == nullptr) { return; }
  if (node -> left == nullptr && node -> right == nullptr) { ans += node -> val; return; }
  func(node -> left, ans); func(node -> right, ans);
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  vector<int> container(n); for (int i = 0; i < n; i++) { cin >> container[i]; }
  LinkedNode* head = nullptr;
  LinkedNode* tail = nullptr;
  for (int it : container) {
    LinkedNode* node = new LinkedNode(); node -> val = it; node -> next = nullptr;
    if (head == nullptr) { head = node; tail = node; }
    else { tail -> next = node; tail = node; }
  }
  queue<TreeNode*> q; 
  TreeNode* root = new TreeNode(); root -> val = head -> val;
  root -> left = nullptr; root -> right = nullptr;
  q.push(root);
  head = head -> next;
  while (!q.empty()) {
    int s = (int) q.size();
    for (int i = 0; i < s; i++) {
      TreeNode* node = q.front(); q.pop();
      TreeNode* LEFT = nullptr; 
      TreeNode* RIGHT = nullptr;
      if (head) {
        LEFT = new TreeNode();
        LEFT -> val = head -> val;
        LEFT -> left = nullptr; LEFT -> right = nullptr;
        q.push(LEFT);
        head = head -> next;
      }
      if (head) {
        RIGHT = new TreeNode();
        RIGHT -> val = head -> val;
        RIGHT -> left = nullptr; RIGHT -> right = nullptr;
        q.push(RIGHT);
        head = head -> next;
      }
      node -> left = LEFT;
      node -> right = RIGHT;
    }
  }
  int ans = 0;
  func(root, ans);

  cout << ans << endl;
  return 0;
}

