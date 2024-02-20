#include <iostream>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

#define ll long long

bool is_prime(int n){
	for(int i = 2; i < n; i++){if(n % i == 0){return false;}}
		return true;
}
int main(){
   
   int n, m, prime = 0; cin >> n >> m; //if (n < m){cout << "NO\n";return 0;}
   for(int i = n + 1; i <= m; i++){
   	if (is_prime(i)){prime = i; break;}
   }
   if(prime != m) {cout << "NO\n"; return 0;}
   for(int i = 2; i < m; i++){
   	if(m % i == 0){cout << "NO\n";return 0;}
   }
   cout << "YES\n";
   return 0;
}

