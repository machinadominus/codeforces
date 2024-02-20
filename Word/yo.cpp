#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main()
{
   string s; cin >> s; int cnt_up = 0, cnt_low = 0;
   for(int i = 0; i < s.size(); i++){
   	if(isupper(s[i])){++cnt_up;}else{++cnt_low;}
   }
   if(cnt_up > cnt_low){
   	for(int i = 0; i < s.size(); i++){cout << (char)toupper(s[i]);}
   		cout << "\n";
   }
   else{for(int i = 0; i < s.size(); i++){cout << (char)tolower(s[i]);}cout << "\n";}
   
    return 0;
}

