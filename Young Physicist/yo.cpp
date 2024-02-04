#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n, a, b, c, sum_a = 0, sum_b = 0, sum_c = 0;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        sum_a += a;
        sum_b += b;
        sum_c += c;
    }
    if(sum_a == 0 && sum_b == 0 && sum_c == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
