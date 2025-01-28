#include <bits/stdc++.h>
using namespace std;
void cycle(int n) {
  if (n == 0) { return; }
  cout << "I love Recursion" << endl;
  cycle(n-1);
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int n; cin >> n;
  cycle(n);
  return 0;
}