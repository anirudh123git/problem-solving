#include <bits/stdc++.h>
using namespace std;
bool isprime(int n) {
  int f = 0;
  for (int i = 2; i < n; i++) {

    if (n % i == 0) {

      f = 1;
      break;
    }
  }

  if (f == 0)
    return 1;
  return 0;
}
void primerange(int x, int y) {
  for (int i = x; i <= y; i++) {

    if (isprime(i)) {
      cout << i << endl;
    }
  }
}
int main() {
  int l, h;
  cout << "enter starting range:" << endl;
  cin >> l;
  cout << "enter ending range:" << endl;
  cin >> h;
  primerange(l, h);

  return 0;
}
