#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]){
  float a, b;
  cin >> a >> b;
  cout << "floor " << a << " / " << b << " = " << floor(float(a / b)) << "\n";
  cout << "ceil " << a << " / " << b << " = " << ceil(float(a / b)) << "\n";
  cout << "round " << a << " / " << b << " = " << round(float(a / b)) << "\n";
  return 0;
}
