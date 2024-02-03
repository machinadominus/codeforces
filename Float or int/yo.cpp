#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  float n;
  float yo;
  cin >> n;
  yo = n;
  if(int(n) == yo){
    printf("int %d\n", int(n));
  }
  else {
    printf("float %d %f\n", int(n), n - int(n));
  }
  return 0;
}
