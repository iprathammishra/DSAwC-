#include <bits/stdc++.h>
using namespace std;
long long cycle(int a, int b) {
  if (a == b) { return 1; }
  if (a > b) { return 0; }
  int one = cycle(a+1, b);
  int two = cycle(a+2, b);
  int three = cycle(a+3, b);
  return one + two + three;
}
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
  int a, b; cin >> a >> b;
  cout << cycle(a, b) << endl;
  return 0;
}