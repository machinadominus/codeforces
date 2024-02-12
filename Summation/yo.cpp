#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	
	long long n, sum = 0;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		sum += x;
	}
	cout << abs(sum) << "\n";
	
	return 0;
}
