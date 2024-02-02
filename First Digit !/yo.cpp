#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int n;
  cin >> n;
  cout << ((int(n/1000) % 2 == 0) ? "EVEN\n" : "ODD\n");
  return 0;
}
