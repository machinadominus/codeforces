#include <iostream>
#include <cmath>
#include <set>
using namespace std;

#define ll long long

int main(){
   
   string n, m; cin >> n >> m;
   for (int i = 0; i < n.size(); i++){
   	if((n[i] == '0' and m[i] == '1') or (n[i] == '1' and m[i] == '0')){
		cout << 1;
	}
	else{cout << 0;}
   }
   cout << "\n";
   
   
   return 0;
}

