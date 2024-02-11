#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    while(true){
        int a, b, sum=0;
        cin >> a >> b;
        if(min(a, b) <= 0){
            break;
        }
        for(int i= min(a, b); i <= max(a, b); i++){
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << "\n";
    }
    
    return 0;
}
