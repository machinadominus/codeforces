#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]){
  double pi = 3.141592653, r;
  cin >> r;
  double area = pi * r * r;
  cout << fixed << setprecision(9) << area << "\n";
  return 0;
}
