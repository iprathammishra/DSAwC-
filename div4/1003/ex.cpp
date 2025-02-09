#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PRATHAM ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
  PRATHAM
  vector<int> a = {2, 2, 2, 2, 3, 2, 1, 2, 4, 1, 2, 1};
  vector<int> b = {4, 4, 6, 1};
  vector<int> c; c.push_back(a[0]);
  int sum = 0;
  for (int i = 1; i < a.size(); i++) {
    c.push_back(c.back()+a[i]);
  }
  for (auto& i : c)
    sum += i;
  cout << sum;
  return 0;
}