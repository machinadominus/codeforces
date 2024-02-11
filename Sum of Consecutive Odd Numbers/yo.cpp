#include <iostream>
using namespace std;

int main(int argc ,char *argv[]){
    int t;
    cin >> t;
    while(t--){
        int a, b, sum = 0;
        cin >> a >> b;
        for (int i = min(a, b) + 1; i < max(a, b); i++){
            if(i % 2 != 0){
                sum += i;
            }
        }
        if(max(a, b) - min(a, b) == 1){cout << 0 << "\n"; continue;}
        cout << sum << "\n";
    }
    return 0;
}
