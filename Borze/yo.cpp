#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main()
{
   string s; cin >> s;
   for(int i = 0; i < s.size(); i++){
   	if(s[i] == '.'){cout << 0;}
   	if(s[i] == '-'){
   		if(s[i + 1] == '.' && i + 1 < s.size()){cout << 1;i++;}else{cout << 2;i++;}
   	}
   }
   
    return 0;
}

