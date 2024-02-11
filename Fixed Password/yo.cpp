#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n = 9999;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1999){cout << "Correct\n"; return 0;}
        cout << "Wrong\n";
    }
    return 0;
}
