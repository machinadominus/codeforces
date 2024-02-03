#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int a, b;
  char ch;
  cin >> a >> ch >> b;
  if(ch == '>'){
    if(a > b){printf("Right\n");}
    else {
      printf("Wrong\n");
    }
  }
  if(ch == '<'){
    if(a < b){printf("Right\n");}
    else{printf("Wrong\n");}
  }
  if(ch == '='){
    if(a == b){printf("Right\n");}
    else{printf("Wrong\n");}
  }
  return 0;
}
