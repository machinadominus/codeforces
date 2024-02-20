#include <iostream>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

#define ll long long

int main(){
   
   int n, sum = 0; cin >> n;int m = n;
   while(m--){int a; cin >> a; sum += a;}
   cout << fixed << setprecision(12) << (double) sum / n << "\n";
   
   return 0;
}

