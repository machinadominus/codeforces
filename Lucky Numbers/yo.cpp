#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    int x = n % 10, y = n / 10;
    if(x % y == 0 or y % x == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
