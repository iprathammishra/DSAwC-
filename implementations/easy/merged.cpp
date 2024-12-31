#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  vector<pair<int, int>> intervals; for (int i = 0; i < n; i++) { 
    pair<int, int> p; cin >> p.first >> p.second;
    intervals.push_back(p);
  }
  sort(intervals.begin(), intervals.end(), [](const pair<int, int>& a, const pair<int, int>& b) -> bool {
    return a.first < b.first;
  });
  vector<pair<int, int>> merged;
  merged.push_back(intervals[0]);
  for (int i = 1; i < n; i++) {
    if (merged.back().second >= intervals[i].first) {
      merged.back().second = max(merged.back().second, intervals[i].second);
    }
    else { merged.push_back(intervals[i]); }
  }

  cout << (int) merged.size() << endl;

  return 0;
}