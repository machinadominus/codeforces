#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    cin >> n;
    if(n % 2 == 0 && n != 2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
