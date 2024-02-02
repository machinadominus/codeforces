#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  long long a, b;
  cin >> a >> b;
  if(a % b == 0 or b % a == 0){
    printf("Multiples\n");
  }
  else {
    printf("No Multiples\n");
  }
  return 0;
}
