#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
  return sin(x);
}

int main() {
  double x;
  cin >> x;
  cout << f(x) << endl;

  double s = 0;
  int factor = 1;
  for (int n = 0; n < 1 ; n++) {
    s += pow(x, 2 * n + 1)/factor;
    factor *= 2 * n * (2 * n + 1);
  }
  cout << s << endl;

  return 0;
}