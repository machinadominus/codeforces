#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]){
    float a, b;
    cin >> a >> b;
    float res = b / (1 - a / 100);
    cout << fixed << setprecision(2) << res << "\n";
    return 0;
}
