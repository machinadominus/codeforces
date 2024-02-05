#include <iostream>
using namespace std;

int
main (int argc, char *argv[])
{
  long long a, b, c;
  cin >> a >> b >> c;
  if (a % c == 0 && b % c == 0)
	{
	  cout << "Both\n";
	}
  else if (a % c == 0 && b % c != 0)
	{
	  cout << "Memo\n";
	}
  else if (a % c != 0 && b % c == 0)
	{
	  cout << "Momo\n";
	}
  else
	{
	  cout << "No One\n";
	}
  return 0;
}
