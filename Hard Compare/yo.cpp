    #include <iostream>
    #include <cmath>
    using namespace std;
     
    int main (int argc, char *argv[]) {
      long long a, b, c, d;
      cin >> a >> b >> c >> d;
      if(b * log(a) > d * log(c)){printf("YES\n");}
      else{printf("NO\n");}
      return 0;
    }
