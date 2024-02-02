#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int n;
  cin >> n;
  cout << int(n / 365) << " years\n";
  n = n % 365;
  cout << int(n / 30) << " months\n";
  n = n % 30;
  cout << n << " days\n";
  return 0;
}
