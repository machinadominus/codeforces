#include <iostream>
#include <iomanip>
using namespace std;

int main (int argc, char *argv[]) {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  a = a % 100;
  b = b % 100;
  c = c % 100;
  d = d % 100;
  long long res = (a*b*c*d)%100 ;
  cout << setw(2) << setfill('0') << res << "\n";
  return 0;
}
