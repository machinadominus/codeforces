#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  long long a, b, c;
  char d, e;
  cin >> a >> d >> b >> e >> c;
  if(d == '+'){
    if(a + b == c){printf("Yes\n");}
    else{printf("%lld\n", a + b);}
  }
  if(d == '-'){
    if(a - b == c){printf("Yes\n");}
    else{printf("%lld\n", a - b);}
  }
  if(d == '*'){
    if(a * b == c){
      printf("Yes\n");
    }
    else{printf("%lld\n", a *b);}
  }
  return 0;
}
