#include <iostream>
#include <algorithm>
using namespace std;

int main (int argc, char *argv[]) {
  long long arr[3], array[3];
  for (int i = 0; i < 3; i++){
    cin >> arr[i];
    array[i] = arr[i];
  }
  int len = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr + len);
  for(int i = 0; i < 3; i++){
    printf("%lld\n", arr[i]);
  }
  printf("\n");
  for(int i = 0; i < 3; i++){
    printf("%lld\n", array[i]);
  }
  return 0;
}
