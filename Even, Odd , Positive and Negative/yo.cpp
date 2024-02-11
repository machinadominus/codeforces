#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    long long n, even = 0, odd = 0, positive = 0, negative =0;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            ++even;
        }
        if(arr[i] < 0){
            ++negative;
        }
        if(arr[i] > 0){
            ++positive;
        }
        if(arr[i] % 2 != 0){
            ++odd;
        }
    }
    cout << "Even: " << even << "\n" << "Odd: " << odd << "\n" << "Positive: " << positive << "\n" << "Negative: " << negative << "\n";
    
    return 0;
}
