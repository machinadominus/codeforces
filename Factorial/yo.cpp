#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int t;
    cin >> t;
    while(t--){
        int x;
        long long prod =1 ;
        cin >> x;
        for (int i = 1; i <= x; i++){
            prod *= i;
        }
        cout << prod << "\n";
    }
    return 0;
}
