#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    char ch;
    cin >> ch;
    if(ch == 'z'){
        cout << "a\n";
    }
    else{
        cout << char(int(ch) + 1) << "\n";
    }
    return 0;
}
