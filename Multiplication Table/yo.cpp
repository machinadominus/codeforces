#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    for (int i = 1; i <= 12; i++){
        cout << n << " * " << i << " = " << n * i << "\n";
    }
    return 0;
}
