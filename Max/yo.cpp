#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    int arr[n], max = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << max << "\n";
    return 0;
}
