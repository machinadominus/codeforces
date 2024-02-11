#include <iostream>
using namespace std;

int main(int argc, char*argv[]){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for (int i = s.length()- 1; i >= 0; i--){
            cout << s[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
