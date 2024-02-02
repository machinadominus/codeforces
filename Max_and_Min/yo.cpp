#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  long long a, b, c;
  cin >> a >> b >> c;
  cout << ((a < b) ? (a < c ? a : c) : (b < c ? b : c)) << " " << ((a > b) ? (a > c ? a : c) : (b > c ? b : c)) << "\n";
}
