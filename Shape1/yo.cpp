#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    for(int i = n; i >= 0; i--){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
