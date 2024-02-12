#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	
	long long n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int x;
	cin >> x;
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			cout << i << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
	
	return 0;
}
