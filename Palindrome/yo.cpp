#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    int temp = n, rev = 0;
    while(temp != 0){
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if(n == rev){
        cout << n << "\n";
        cout << "YES\n";
        return 0;
    }
    string s = to_string(rev);
    int num = stoi(s);
    cout << num << "\n" << "NO\n";
    return 0;
}
