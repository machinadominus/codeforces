#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    char ch;
    cin >> ch;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        for(int j = 0; j < arr[i]; j++){
            cout << ch;
        }
        cout << "\n";
    }
}
