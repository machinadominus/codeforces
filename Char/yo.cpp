#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  char ch;
  cin >> ch;
  if(int(ch) >= 97){
    cout << char(int(ch) - 32) << "\n";
  }
  else{
    cout << char(int(ch) + 32) << "\n";
  }
  return 0;
}
