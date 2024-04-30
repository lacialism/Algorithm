#include <iostream>
using namespace std;

int main()
{
	long s;
	int i = 0;
	cin >> s;

	while (s >= 0)
		s -= ++i;

	cout << i-1;

	return 0;
}