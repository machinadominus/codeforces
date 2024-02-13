#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	
	int n;
	cin >> n;
	int x = 0;
	while(n--){
		string y;
		cin >> y;
		if(y == "X++"){x++;}
		if(y == "++X"){++x;}
		if(y == "X--"){x--;}
		if(y == "--X"){--x;}
	}
	cout << x << "\n";
	return 0;
}
