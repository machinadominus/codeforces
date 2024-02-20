#include <iostream>
#include <cmath>
#include <set>
using namespace std;

#define ll long long

int main(){
   
   int n; cin >> n;
   while(true){
   	//cout << i;
   	n = n + 1;
   		string s = to_string(n);
   		set<char> yr;
   		for(int j = 0; j < 4; j++){
   			yr.insert(s[j]);
   		}
   		if(yr.size() == 4){cout << s << "\n";return 0;}
   		
   }
   
   return 0;
}

