#include <bits/stdc++.h>
using namespace std;
long long cycle(int n) {
  if (n <= 1) { return n; }
  return n * cycle(n-1);
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  cout << cycle(n) << endl; 
  return 0;
}