#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n, k; cin >> n >> k;
  vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
  priority_queue<int, vector<int>, greater<int>> heap(a.begin(), a.end());

  vector<int> ans;
  while (k--) {
    int val = heap.top(); heap.pop();
    ans.push_back(val);
  }
  for (int& it : ans) { cout << it << " ";}
  cout << endl;
   
  return 0;
}