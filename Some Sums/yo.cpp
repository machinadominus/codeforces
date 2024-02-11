#include <iostream>
using namespace std;

int sum_digits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(int argc, char *argv[]){
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        if(sum_digits(i) >= min(a, b) and sum_digits(i) <= max(a, b)){
            sum+= i;
        }
    }
    cout << sum << "\n";
    return 0;
}
