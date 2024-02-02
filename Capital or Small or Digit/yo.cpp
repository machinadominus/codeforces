#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  char ch;
  cin >> ch;
  int yo = int(ch);
  if(yo >= 65 && yo <= 90){
    printf("ALPHA\nIS CAPITAL\n");
  }
  else if(yo >= 97 && yo <= 122){
    printf("ALPHA\nIS SMALL\n");
  }
  else{
    printf("IS DIGIT\n");
  }
  return 0;
}
