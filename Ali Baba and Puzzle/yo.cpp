#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a + b * c == d){
        cout << "YES\n";
    }
    else if(a + b - c == d){
        cout << "YES\n";
    }
    else if(a * b - c == d){
        cout << "YES\n";
    }
    else if(a * b + c == d){
        cout << "YES\n";
    }
    else if(a - b + c == d){
        cout << "YES\n";
    }
    else if(a - b * c == d){
        cout << "YES\n";
    }
    else {cout << "NO\n";}
    return 0;
}
// + , - and * only repeating once
