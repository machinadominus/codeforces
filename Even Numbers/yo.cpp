#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    if (n == 1){
        cout << -1 << "\n";
        return 0;
    }
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            cout << i << "\n";
        }
    }
    return 0;
}
